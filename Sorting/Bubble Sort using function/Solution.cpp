void bubbleSort(int arr[], int n)
{
   int i;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
}
void bubble(int arr[], int i, int n){
    // Your code here    
    for(int k=0;k<n-i-1;k++){
        if(arr[k]>arr[k+1]){
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
}
