/**
*时间：2019-05-06
*
*作者：lhq
*
*项目：冒泡排序
*/

#include<stdio.h>

//从小到大排序 arr是数组 n是数组的长度
void desc(int *arr,int n);
//从大到小排序 arr是数组 n是数组的长度
void asc(int *arr,int n);
int main()
{
	int a[8] = {1,25,6,92,3,10,15,69};
	int i;
	asc(a,8);
	printf("排序后的数据是:\n");
	for(i=0; i<8; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

void desc(int *arr,int n)
{
	int temp;  //用于交换数据的
	int i,j;//两次循环的基数
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
	int temp;  //用于交换数据的
	int i,j;//两次循环的基数
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