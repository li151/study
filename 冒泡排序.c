/**
*ʱ�䣺2019-05-06
*
*���ߣ�lhq
*
*��Ŀ��ð������
*/

#include<stdio.h>

//��С�������� arr������ n������ĳ���
void desc(int *arr,int n);
//�Ӵ�С���� arr������ n������ĳ���
void asc(int *arr,int n);
int main()
{
	int a[8] = {1,25,6,92,3,10,15,69};
	int i;
	asc(a,8);
	printf("������������:\n");
	for(i=0; i<8; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

void desc(int *arr,int n)
{
	int temp;  //���ڽ������ݵ�
	int i,j;//����ѭ���Ļ���
	for(i=0; i<n; i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void asc(int *arr,int n)
{
	int temp;  //���ڽ������ݵ�
	int i,j;//����ѭ���Ļ���
	for(i=0; i<n; i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}