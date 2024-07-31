//APPROACH 1
#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> ans;
    for(int i=0;i<kArrays.size();i++){
        for(int j=0;j<kArrays[i].size();j++){
            ans.push_back(kArrays[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

//APPROACH 2  HEAP
#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> ans;
    for(int i=0;i<k;i++){
        for(int j=0;j<kArrays[i].size();j++){
            pq.push(kArrays[i][j]);
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}