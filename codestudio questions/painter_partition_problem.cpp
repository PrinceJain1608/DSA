int ispossible(vector<int> &arr, int k,int mid)
{
    int paintercount=1;
    int boards=0;
    for(int i=0;i<arr.size();i++)
    {
        if(boards+arr[i]<=mid)
        {
            boards+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>k || arr[i]>mid)
            {
                return false;
            }
            boards=arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
   int start=0;
   int sum=0;
   for(int i=0;i<arr.size();i++)
   {
       sum=sum+arr[i];
   }
   int end=sum;
   int ans=-1;
   int mid=start+(end-start)/2;

   while(start<=end)
   {
       if(ispossible(arr,k,mid))
       {
           ans=mid;
           end=mid-1;
       }
       else
       {
           start=mid+1;
       }
       mid=start+(end-start)/2;
   }
   return ans;
}