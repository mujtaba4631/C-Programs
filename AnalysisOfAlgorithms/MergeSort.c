#include<stdio.h>

void combine(int down, int mid, int up);

void mergeSort(int down, int up);

int a[10];

void main()
{
	int n,i,j;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter the elements for position %d:", i);
		scanf("%d",&a[i]);
	}
	
	mergeSort(0,n-1);
		//Output
			printf("\n The sorted array is as follows....\n");
		for(i=0;i<n;i++)
		{
				printf("\n %d",a[i]);
			
		}
}

void combine( int down, int mid, int up)
{
	int j,i,k;
	int temp[10];
	k= down;
	i = down;
	j = mid +1;
	
	while(i<=mid &&  j<=up)
	{
		if(a[i]  <= a[j])
		{
			temp[k]= a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]= a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k] = a[i];
		i++;
		k++;
	}
	
	while(j<= up)
	{
		temp[k]= a[j];
		j++;
		k++;	
	}
	for(k=down;k<=up;k++)
	a[k]=temp[k];
	
}

void mergeSort(int down, int up)
{
	int mid;
	if(down < up)
	{
		mid = (down +up)/2;
		mergeSort(down,mid);
		mergeSort(mid+1, up);
		combine(down,mid,up);
	}
}
