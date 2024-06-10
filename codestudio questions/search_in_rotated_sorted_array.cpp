int pivotarray(vector<int> &arr,int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;  
}
int binarysearch(vector<int> &arr,int s,int e,int k)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int search(vector<int> &arr, int n, int k) {
    int pivot=pivotarray(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        binarysearch(arr,pivot,n-1,k);
    }
    else{
        binarysearch(arr,0,pivot-1,k);
    }
}