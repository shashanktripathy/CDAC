#include<iostream>
#include<omp.h>
using namespace std;
int main()
{
	int n=10;
	int a=5,b=4;
	#pragma omp parallel for shared(a)
 	for (int i = 0; i < n; i++)
	{
    	 a = b + i;
    	printf("%d\t%d\t%d\n",a,b,omp_get_thread_num());       
	}
	printf("%d",a);
	return 0;
}
