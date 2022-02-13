#include <stdio.h>
int main()
{
 int n;
 do 
  {
	printf("Inserisci valore n");
	scanf("%d", &n);
 }while (n<=0);
 for (int i= n -(2*n); i<n;i++)
 {
	printf("%d\n", i);
 } 
 return 0;
}
