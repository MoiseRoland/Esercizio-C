#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,contN,valore;
    double media = 0;
    do
    {
    printf("Inserisci a:")
    scanf("%d", &a);

    printf("Inserisci b:");
    scanf("%d", &b);
    }while (a<b)

    do
    {
    printf("Inserisci dei valori, metterne maggiori ad a o minori di b per uscire")
    scanf("%d",&valore);

    media = media + valore;
    contN++;

    }while(valore<b&&valore>a);
    media=media/contN;
    printf("%d",&media);

    return = 0;
}
