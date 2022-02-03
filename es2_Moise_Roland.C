#include <studio.h>
int main(int argc, char *argv[])
{
int a, b, somma, prod;
do
{
printf("Inserisci un valore di a, metti 0 per uscire.");
scanf("%d", &a);

printf("Inserisci un valore di b, metti 0 per uscire.");
scanf("%d", &b);

prod=a*b;

printf("Prodotto: %d\n", prod);

somma=somma+prod;
}while (a!=0&&b!=0);

printf("La somma dei prodotti: %d\n", somma);
return 0;
}