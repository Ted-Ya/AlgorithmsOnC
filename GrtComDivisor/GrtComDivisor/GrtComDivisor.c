#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//caculate both number the greatest comcon divisor
int main()
{
	int n = 0;
	int m = 0;

	scanf("%d%d", &n, &m);

	if (n > m)
	{
		n = n ^ m;
		m = n ^ m;
		n = n ^ m;
	}
    
	int r = m % n;
	while (r !=0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("%d\n", n);
}