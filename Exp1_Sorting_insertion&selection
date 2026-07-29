#include<stdio.h>
#include<conio.h>


void insertionSort(int array[], int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=array[i];
        j=i;
        while(j>0 && array[j-1]>key){
        array[j]=array[j-1];
        j--;
    }
    array[j]=key;        
    }
}


void SelectionSort (int arr[], int n){
    for(int i=0; i< n-1; i++){
        int min_idx = i;
        for(int j= i+1; j<n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx]  =temp;
    }
}

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    
    int array[n];
    printf("enter the array elements: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The entered array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]); 
    }
    printf("\n");
    
    int choice;

    printf("\nSelect a sorting algorithm\n");
    printf("1.Isertion sort\n");
    printf("2.selection sort\n");
    printf("3.exit\n");
    printf("enter choice 1, 2 or 3 : ");

    scanf("%d",&choice);

    switch(choice){
        case 1:
            insertionSort(array, n);
            printf("\nArray sorted using Insertion Sort: ");
             for (int i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;

        case 2:
            SelectionSort(array, n);
            printf("\nArray sorted using Selection Sort: ");
             for (int i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;

        case 3:
            printf("exiting program");
            return 1;
    }
    
}
