#include<stdio.h>

void bubbleSort(int numbers[], int size);

void main()
{
    int a[10], n, i , j,sample;

    printf("Enter the number of elemnts :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the number at element  %d:", i);
        scanf("%d",&a[i]);
    }

bubbleSort(a,n);

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
    //Bubble Sort
void bubbleSort(int numbers[], int size)
{

int i,j,sample;
    for(i = 0; i<= size-2; i++)
    {
        for(j=0;j<size-i-1; j++)
        {
            if(numbers[j]> numbers[j+1])
            {
                sample = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]= sample;
            }

        }
    }

} 
