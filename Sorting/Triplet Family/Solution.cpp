// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n){
    vector<int> result;
    // code here
    int flag=0;
    sort(arr,arr+n);
    int j,k;
    for(int i=n-1;i>=2;i--){
        j=0,k=i-1;
        while(j<k){
            if((arr[j]+arr[k])==arr[i]){
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                result.push_back(arr[k]);
                j++;
                k--;
                flag=1;
                break;
            }
            else if((arr[j]+arr[k])<arr[i])
                j++;
            else
                k--;
        }
        if(flag==1)
            break;
    }
    return result;
}
