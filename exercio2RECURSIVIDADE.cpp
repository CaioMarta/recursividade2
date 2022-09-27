#include <stdio.h>
#include <stdlib.h>

int potencial(int x, int n)
{
	if(n==0)
		return 1;
	else
	return x* potencial(x, n-1);	
}

int main()
{
	int n, x;
	
	printf("digite valor para x");
	scanf("%d", &x);
	printf("digite um valor para n");
	scanf("%d", &n);
	
	printf("resultado %d elevado a %d: %d", x, n, potencial(x, n));
	return 0;
}