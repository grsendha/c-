#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isSafe(int r,int c,vector<vector<int>> &arr, int n,vector<vector<bool>> &visited){
        if((r>=0 && r<n) && (c>=0 && c<n) && arr[r][c]==1 && visited[r][c]==0 ){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(int r,int c,vector<vector<int>> &arr, int n,vector<vector<bool>> &visited,
                string output,vector<string>&ans){
        if(r==n-1&&c==n-1){
            ans.push_back(output);
            return;
        }
        visited[r][c]=1;
        // D  L  R  U
        if(isSafe(r+1,c,arr,n,visited)) {
            solve(r+1,c,arr,n,visited,output+'D',ans);
        }
        
        if(isSafe(r,c-1,arr,n,visited)) {
            solve(r,c-1,arr,n,visited,output+'L',ans);
        }
        if(isSafe(r,c+1,arr,n,visited)) {
            solve(r,c+1,arr,n,visited,output+'R',ans);
        }
        if(isSafe(r-1,c,arr,n,visited)) {
            solve(r-1,c,arr,n,visited,output+'U',ans);
        }
        visited[r][c]=0;
    }
    vector<string> findPath(vector<vector<int>> &arr, int n) {
        
        string output="";
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        vector<string>ans;
        solve(0,0,arr,n,visited,output,ans);
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        return ans;
    }
};
int main(){
    vector<vector<int>>v{{1, 0, 0, 0},
                        {1, 1, 0, 1}, 
                        {1, 1, 0, 0},
                        {0, 1, 1, 1}};
    int n=4;
    Solution a;
    a.findPath(v,n);
    
    
}