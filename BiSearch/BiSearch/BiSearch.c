
#include <stdio.h>

//数组V中 v[0]<=v[1]<=v[2]<=...<=v[n-1]
//在该数组中找到x 返回其下标
int binsearch(int n,int v[], int x)
{
	if (v == NULL) {
		return -1;
	}

	int L = 0;
	int R = n-1;
	int mid = L + ((R - L) >> 1);
	while (mid >=L && mid <=R)
	{
		if (v[mid] == x) {
			return mid;
		}
		else if (v[mid] < x) {
			L = mid + 1;
		}
		else
		{
			R = mid - 1;
		}
		mid = L + ((R - L) >> 1);
	}
	return -1;
}
int main()
{
	int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int index = 0;
	index = binsearch(10,v,4);
	printf("%d\n", index);
	return 0;
}