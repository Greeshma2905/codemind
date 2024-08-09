//linear search recurssion
#include<stdio.h>
int linear_search_rec(int *a,int n,int i,int key){
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key){
		return i;
	}
	return linear_search_rec(a,n,i+1,key);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	int result = linear_search_rec(arr,n,0,key);
	if(result ==-1)
	{
	printf("key not found");
    }
	else
	{
		printf("key found at %d",result);
	}
}
