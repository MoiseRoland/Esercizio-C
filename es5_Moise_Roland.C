#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,c, diff, contP,contD,contN;
    do
    {
    printf("Inserisci a:");
    scanf("%d", &a);

    printf("Inserisci b:");
    scanf("%d", &b);

    printf("Inserisci c:");
    scanf("%d", &c);

    diff=a-b;
    if(diff%2==0)
        contP++;
    else if(diff==0)  
        contN++;
    else
        contD++;
    }while (a+b<c);

    return 0;
}