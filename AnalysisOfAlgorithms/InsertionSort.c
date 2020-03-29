#include<stdio.h>

//Function Decleration
void insertionSort(int array[], int lenght);
//!!!!!!*******!!!!!


//Main Method
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
	// Function Call, Two parameters are passed 
        insertionSort(a,n);
        
        
		//Output
		printf("\n The sorted array is as follows....\n");
		for(i=0;i<n;i++)
		{
				printf("\n %d",a[i]);
			
		}
}


// Insertion Sort Funtion
void insertionSort(int array[], int lenght)
{
	int i, k, x;
	
	for(k=1; k<lenght;k++)
	{
		//Initializing the elements as sorted array
		x = array[k];
		i=k-1;
		
		//Shifting the numbers 
		while(i>=0 && array[i]>x)
		{
			array[i+1]= array[i];
			i=i-1;
		}
		array[i+1]= x;
	}
	
}

