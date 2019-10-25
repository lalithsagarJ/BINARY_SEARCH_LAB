#include<stdio.h>
#include<stdlib.h>
int mid;
int binary(int n,int a[n],int ele,int b,int e);
void display(int n,int a[n],int p);
int main()
{
 	int n,ele;
	printf("\nenter how many elements:");
	scanf("%d",&n);
	int a[n];
	printf("\nenter the sorted elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nenter the element to be searched:");
	scanf("%d",&ele);
	int e=binary(n,a,ele,0,n-1);
	display(n,a,e);
	return 0;
}

int binary(int n,int a[n],int ele,int b,int e)
{
	int p=-1;
	mid=(b+e)/2;
	while(b<=e){
		if(a[mid]==ele)
		{	
			p=mid;
			break;
		}	
		else if(a[mid]>ele)
		{
			e=mid-1;
			binary(n,a,ele,b,e);
		}
		else
		{ 
			b=mid+1;
			binary(n,a,ele,b,e);
		}
	}
	return p;
}
void display(int n,int a[n],int p)
{
	if(p<0)
		printf("element not present:");
	else
		printf("element %d is present in position %d",a[p],p+1);
}
