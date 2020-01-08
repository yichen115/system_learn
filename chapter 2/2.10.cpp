#include<stdio.h>
void inplace_swap(int *x,int *y)
{
	*y=*x^*y;
	*x=*x^*y;
	*y=*x^*y;
}
int main()
{
	int i=0;
	int cnt=5;
	int a[]={1,2,3,4,5};
	int first,last;
	for(first=0 ,last=cnt-1;first<=last;first++,last--)
	{//想要不出现0的情况只需要把 first<=last 改为 first<last
		printf("before:%d,%d\n\n",a[first],a[last]);
		inplace_swap(&a[first],&a[last]);
		printf("then:%d,%d\n\n",a[first],a[last]);
	}
	return 0;
}

