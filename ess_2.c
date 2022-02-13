#include <stdio.h>

int main()
{
    int n;
    printf("Inserisci un valore");
    scanf("%d", &n);
    while (n < 0)
    {
       printf("Valore non valido, inserisci di nuovo"); 
       scanf("%d", &n);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
