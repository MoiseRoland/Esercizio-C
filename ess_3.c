#include <stdio.h>
int main()
{
   int n; 
   printf("Inserisci un valore");
   scanf("%d", &n);
    while (n<0)
    {
      printf("Valore non valido, inserisci di nuovo");
      scanf("%d", &n);
    }

    for (int i = n; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
	return 0;
}
