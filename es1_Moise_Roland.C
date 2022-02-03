#include <stdio.h>

int main(int argc, char *argv[])
{
int a, b, somma;

do
{
printf("Inserisci un valore di a, >0");

scanf("%d", &a);
}while(a<0);
do
{
printf("Inserisci un valore di b, >0");

scanf("%d", &b);
}while (b<0);

somma=a+b;
printf("Somma è: %d\n", somma);

return 0;
}