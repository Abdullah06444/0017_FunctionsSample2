#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPentagonal(int number) 
{

	int i;
	for (i = 0; number > 0; i++)
		number -= 1 + 3 * i;
	if (number == 0)
		return 1;
	return 0;
}

int main()
{

	int x;
	do
	{

		scanf("%d", &x);
		if (x > 0)
			if (isPentagonal(x))
				printf("%d is a pentagonal number\n", x);
			else
				printf("%d is NOT a pentagonal number\n", x);

	} while (x > 0);
}