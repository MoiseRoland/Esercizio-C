#include <stdio.h>
#include <limits.h>

int Inserisci (int array[])
{
  int numero = 0, n = 0;
  do
    {
      printf ("inserisci un valore. Premi -1 per terminare\n");
      scanf ("%d", &numero);
      if (numero != -1)
	{
	  array[n] = numero;
	  n++;
	}
      if (n == 0)
	printf ("Il tuo array non contiene numeri, riprova \n");
    }
  while (numero != -1);
  return n;
}

void Stampa (int array[], int n)
{
  for (int i = 0; i < n; i++)
    printf ("Il valore in posizione %d: %d\n", i, array[i]);
}

void
StampaInversa (int array[], int n)
{
  for (int i = n - 1; i >= 0; i--)
    printf ("Il valore in posizione %d: %d\n", i, array[i]);
}

int Ricerca (int array[], int n, int numero)
{
  for (int i = 0; i < n; i++)
    {
      if (array[i] == numero)
	{
	  return i;
	}
    }
  return -1;
}

int Massimo (int array[], int n)
{
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];

  return max;
}

int Inserisci_in_Posizione (int array[], int *n, int pos, int valore)
{
  for (int i = *n; i > pos; i--)
    {
      array[i] = array[i - 1];
    }
  (*n)++;
  array[pos] = valore;
  return pos;
}

int InserisciCoda (int array[], int *n, int numero)
{
  array[*n] = numero;
  (*n)++;
  return *n;
}

int Modifica (int array[], int pos, int val)
{

  array[pos] = val;
  return pos;
}

int Elimina (int array[], int *n, int pos)
{
  for (int i = pos; i < *n; i++)
    {
      array[i] = array[i + 1];
    }
  (*n)--;

  return pos;
}

void Esegui(int scelta, int numeri[], int *n)//
{
    int valore, posizione, numero;
  switch (scelta)
    {
    case 1:
      Stampa (numeri, *n);
      break;

    case 2:
      printf ("inserisci un numero: ");
      scanf ("%d", &numero);
      posizione = InserisciCoda (numeri, n, numero);
      printf ("Valore inserito in posizione: %d", posizione);
      break;

    case 3:
      
      printf ("Inserisci il valore da sostituire: ");
      scanf ("%d", &valore);
      posizione = Ricerca (numeri, *n, valore);

      if (posizione > -1)
	{
	  printf ("Inserisci il nuovo valore: ");
	  scanf ("%d", &valore);
	  Modifica (numeri, posizione, valore);
	}
      else
	{
	  printf ("valore non esistente");
	}
      break;
    case 4:
      
      printf ("Inserisci il valore da eliminare: ");
      scanf ("%d", &valore);
      posizione = Ricerca (numeri, *n, valore);

      if (posizione > -1)
	{
	  Elimina (numeri, n, posizione);
	}
      else
	{
	  printf ("valore non esistente");
	}
      break;
    case 5:
     
      printf ("Inserisci il valore da ricercare: ");
      scanf ("%d", &valore);
      posizione = Ricerca (numeri, *n, valore);

      if (posizione > -1)
	{
	  printf ("valore trovato in posizione %d", posizione);
	}
      else
	{
	  printf ("valore non esistente");
	}
      break;

    case 6:
     
      printf ("Inserisci il valore da aggiungere: \n");
      scanf ("%d", &valore);
      printf ("Inserisci la posizione: \n");
      scanf ("%d", &posizione);

      if (posizione < *n)
	{
	  Inserisci_in_Posizione (numeri, n, posizione, valore);
	}
      else
	{
	  printf ("Valore non esistente\n");
	}
      break;
    case 7:
      StampaInversa (numeri, *n);
      break;

    case 8:
      int max = Massimo (numeri, *n);
      printf ("Il massimo dell'array: %d\n", max);
      break;
      
     default:
     printf("Hai scelto un'opzione che non esiste\n");
     break;
    }
}

int menu ()
{

  int scelta;

  printf ("\n1)Mostrare l'array\n");
  printf ("2)Inserisci elemento in coda\n");
  printf ("3)Modifica elemento\n");
  printf ("4)Eliminare elemento\n");
  printf ("5)Ricerca elemento\n");
  printf ("6)Inserisci in posizione\n");
  printf ("7)Mostrare l'array al contrario\n");
  printf ("8)Valore massimo del array\n");
  printf ("0)Esci\n");

  scanf ("%d", &scelta);

  return scelta;
}

int main ()
{

  int scelta, numeri[SHRT_MAX];
  int n = Inserisci(numeri);
  do
    {
      scelta = menu ();

      if (scelta != 0)
	    {
	    Esegui (scelta, numeri, &n);
	    }
    } while (scelta != 0);
  printf ("Programma finito\n");
  return 0;
}
