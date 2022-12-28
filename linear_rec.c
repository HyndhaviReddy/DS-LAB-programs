#include<stdio.h>
int linearrev(int arr[5],int value , int index, int n)
{
	int pos = 0;
	if(index>=n)
	{
		return 0;
	}
	else if (arr[index]==value)
	{
		pos = index+1;
		return pos;
	}
	else 
	{
		return linearrev(arr,value,index+1,n);
	}
		return pos;
}
int main()
{
	int n, value , pos, m=0, arr[5];
	printf("emter your size :");
	scanf("%d",& n);
	printf("enter the array elements:");
	for(int i=0; i<n;i++)
	{
		scanf("%d",& arr[i]);
	}
	pos=linearrev(arr,value,0,n);
	if (pos!=0)
	{
		printf("element found at  %d pos", pos);
	}
	else
	{
		printf("element not found");
	}
	return 0;
}

