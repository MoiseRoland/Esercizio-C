#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
double a, b, rapp,rad;
do{
printf("Inserisci valore di a:");
scanf("%lf", &a);

printf("INserisci valore di b:");
scanf("%lf", &b);

if(a<b)
    rapp=b/a;
else
    rapp=b/a;
if(rapp>0)
{
    rad=sqrt(rapp);
    printf("Radice: %f\n\n", rad);
}
}while (rapp>0);
printf("Non e' possibile mettere un numero negativo sotto la radice\n\n");

return 0;
}