#include <bits/stdc++.h> 
void solve(vector < vector < int >> & arr,int i,int j,string ans,vector<string> &result){
    if(i<0 || i>=arr.size() || j<0 || j>=arr[0].size() || arr[i][j]==0){
        return;
    }
    if(i==arr.size()-1 && j==arr[0].size()-1){
        result.push_back(ans);
        return;
    }
    arr[i][j]=0;
    solve(arr,i+1,j,ans+"D",result);
    solve(arr,i,j-1,ans+"L",result);
    solve(arr,i,j+1,ans+"R",result);
    solve(arr,i-1,j,ans+"U",result);
    arr[i][j]=1;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> result;
    string ans="";
    if(arr.empty()||arr[0].empty()||arr[0][0]==0){
        return result;
    }
    solve(arr,0,0,ans,result);
    return result;
}