#include<stdio.h>

//Function Declation
int partion(int a[], int lb, int ub);

void quickSort(int a[], int lb, int ub);
//*************************//

void main()
{
	int a[10],n,i,j;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter the elements for position %d:", i);
		scanf("%d",&a[i]);
	}
	
	selectionSort(a,n);
		//Output
			printf("\n The sorted array is as follows....\n");
		for(i=0;i<n;i++)
		{
				printf("\n %d",a[i]);
			
		}
}

int partion(int a[], int lb, int ub)
{
	int down, up, x, temp;
	down = lb;
	up = ub;
	x=a[0];
  while(down<up)
  {
		
	while(a[down]<=x && down<up)
		down++;
	while(a[up]>x)
		up--;
	if(down<up)
	{
		temp = a[down];
		a[down]= a[up];
		a[up]= temp;
	}
  }
  a[lb]=a[up];
  a[up]=x;
  return up;
}

void quickSort(int a[], int lb, int ub)
{
	int j;
	if(lb < ub)
	{
		j= partion(a,lb,ub);
		quickSort(a,lb,j-1);
		quickSort(a,j+1,ub);
		
	}
	
}
