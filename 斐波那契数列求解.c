/**
*���ڣ�2019-05-04
*
*���ߣ�lhq
*
*��Ŀ��쳲���������
*/

#include<stdio.h>
#define NUM 13   //����쳲��������е�ѭ������

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
		printf("��%d�����ǣ�%d\n",j+1,sum[j]);
	}
	
	getchar();
	return 0;
}


