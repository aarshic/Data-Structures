void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
}
void insert(int arr[], int i){
    // Your code here  
    int value=arr[i],j=i-1;
    while(j>=0 && arr[j]>value){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=value;
}

