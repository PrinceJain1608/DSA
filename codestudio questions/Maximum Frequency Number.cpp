int maximumFrequency(vector<int> &arr, int n)
{
    int frq=0;
    int ans=0;
   unordered_map<int,int> m;
   for(int i=0;i<arr.size();i++){
       m[arr[i]]++;
       frq=max(frq,m[arr[i]]);
   }
   for(int i=0;i<arr.size();i++){
       if(frq==m[arr[i]]){
           ans=arr[i];
           break;
       }
   }
   return ans;
}