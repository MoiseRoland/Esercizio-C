#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Inserisci due valori,mettendo secondo maggiore del primo\n");

    scanf("%d", &n1);
    scanf("%d", &n2);
    

    while(n1<0||n2<0&&n2<n1)
    {
    	printf("Valori non validi, inserisci di nuovo\n");
        scanf("%d", &n1);
        scanf("%d", &n2);
    }
	
    for (int i = n1; i < n2; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
