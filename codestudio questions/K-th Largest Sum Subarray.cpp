//APPROACH 1    SC O(N2)
#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> sumArray;
	int n=arr.size();
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			sumArray.push_back(sum);
		}
	}
	sort(sumArray.begin(),sumArray.end());
	return sumArray[sumArray.size()-k];
}


//APPROACH 2    SC O(K)
#include <queue>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int,vector<int>,greater<int>> mini;
	int n=arr.size();
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(mini.size()<k){
				mini.push(sum);
			}
			else{
				if(sum>mini.top()){
					mini.pop();
					mini.push(sum);
				}
			}
		}
	}
	return mini.top();
}