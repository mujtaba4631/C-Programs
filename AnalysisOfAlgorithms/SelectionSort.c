#include<stdio.h>

void selectionSort(int array[], int lenght);
 
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
	//Selection Sort
void selectionSort(int array[], int lenght)	
{

    	int largest, pos, i, j;
    	for (j = lenght - 1; j > 0 ;j--)
    	{
    		largest = array[0];
    	    pos = 0;
    	    for(i = 1 ;i <= j; i++)
    	    {
			
			  	if(array[i] > largest)
				{
					largest = array[i];
					pos = i;	
				}
		    }
				
			
				//Swapping
				array[pos]=array[j];
				array[j]=largest;			
		
		}
}
