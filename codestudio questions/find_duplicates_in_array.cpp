#include <bits/stdc++.h> 
vector <int> findDuplicates(vector <int>& arr, int n) {
    sort(arr.begin(),arr.end());
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                 if (v.empty() || arr[i] != v.back()) {
                    v.push_back(arr[i]);
                 }
                
            }
            
        }
        return v;
}