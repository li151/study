/**
*日期：2019-05-04
*
*作者：lhq
*
*项目：斐波那契数列
*/

#include<stdio.h>
#define NUM 13   //定义斐波那契数列的循环次数

int main()
{
	int i,j;
	long sum[NUM]={1,1};
	for(i=2;i<NUM;i++)
	{
		sum[i] = sum[i-1]+sum[i-2];
	}
	for(j = 0;j<NUM;j++)
	{
		printf("第%d个数是：%d\n",j+1,sum[j]);
	}
	
	getchar();
	return 0;
}


