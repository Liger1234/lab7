#include <stdio.h>

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int arr[], int n)
{
  printf("\nUsing Bubble sort\n\n");
  int i, j,temp;
  for (i = 0; i < n-1; i++)
  {
    for (j = 0; j < n-i-1; j++)
    {
      if (arr[j] > arr[j+1])
       {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
         int total = 0;
         total ++;
         printf("total: %d\n", total);
       }
    
    }
  }
  
}

void selectionSort(int arr[], int n)
{
  int i, j, min_idx, temp;
  for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++)
    if (arr[j] < arr[min_idx])
      min_idx = j;
    temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
    
  }
}



int printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
  printf("%d ", arr[i]);
  printf("\n");
}


int main()
{
int arr[] = {97,16,45,63,13,22,7,58,72};
int arr2[] = {90,80,70,60,50,40,30,20,10};
int n = 9; //size of the array
printf("Array bofore sorting: \n");
printArray(arr, n);
bubbleSort(arr, n);
printf("Sorted array: \n");
printArray(arr, n);

printf("Array bofore sorting: \n");
printArray(arr2, n);
bubbleSort(arr2, n);
printf("Sorted array: \n");
printArray(arr2, n);

  printf("selection:\n");
  
  selectionSort(arr, n);
  printArray(arr, n);

  selectionSort(arr2, n);
  printArray(arr2, n);


return 0;
}
