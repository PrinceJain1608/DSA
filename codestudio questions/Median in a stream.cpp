#include <vector>
#include<algorithm>
void solve(vector<int> &temp,vector<int> &ans){
	sort(temp.begin(),temp.end());
	int data;
	if(temp.size()%2==0){
		data=(temp[temp.size()/2]+temp[(temp.size()/2) - 1])/2;
	}
	else{
		data=temp[temp.size()/2];
	}
	ans.push_back(data);
}
vector<int> findMedian(vector<int> &arr, int n){
	vector<int> temp;
	vector<int> ans;
	for(int i=0;i<n;i++){
		temp.push_back(arr[i]);
		solve(temp,ans);
	}
	return ans;
}
