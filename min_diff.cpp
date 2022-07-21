#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        vector<vector<int>>ans;
        
        for(int i=0;i<arr.size()-1;i++){
            mini=min(arr[i+1]-arr[i],mini);
        }
        for(int j=0;j<arr.size()-1;j++){
            if(arr[j+1]-arr[j]==mini){
                ans.push_back({arr[j],arr[j+1]});
            }
        }
        return ans;
    }
};
int main(){
  Solution s;
    vector<int>v{4,2,1,3};
    vector<vector<int>>v1=s.minimumAbsDifference(v);
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++)
            cout<<v1[i][j]<<" ";
        cout<<endl;
    }  
}