int firstocc(vector<int> &arr,int n,int k){
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	int ans=-1;
	while(start<=end){
		if(arr[mid]==k){
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]<k){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;

	}
	return ans;
}
int lastocc(vector<int> &arr,int n,int k){
	int start=0;
	int end=n-1;
	int mid=(start+end)-start/2;
	int ans=-1;
	while(start<=end){
		if(arr[mid]==k){
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<k){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=(start+end)-start/2;
	}
	return ans;
}

vector<int> searchRange(vector<int> &arr, int x)
{
	vector<int> v;
	int n=arr.size();
	int a=firstocc(arr,n, x);
	int b=lastocc(arr,n, x);
	v.push_back(a);
	v.push_back(b);
	return v;
}
