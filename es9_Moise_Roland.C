#include <stdio.h>
#include <limits.h>

int main()
{
	int a, b, c, min = INT_MAX, max = 0;

	do
	{
		printf("Inserisci a\n");
		scanf("%d", &a);
		printf("Inserisci b\n");
		scanf("%d", &b);
		printf("Inserisci c\n");
		scanf("%d", &c);

		if (a < b && b < c)
		{

			if (a < min)
				min = a;
			if (c > max)
				max = c;
		}
		else
		{
			printf("Non valido\n");
		}

	} while (a >= 0 && b >= 0 && c >= 0);

	printf("max: %d\n", max);
	printf("minimo: %d\n\n", min);

	return 0;
}
