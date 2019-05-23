void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
int select(int arr[], int i){
    // Your code here  
    int max=i;
    for(int j=i-1;j>=0;j--){
        if(arr[max]<arr[j]){
            max=j;   
        }
    }
    return max;
}
