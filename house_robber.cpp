#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>&nums){
    int n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        int multiply;
        for(int i=1;i<n;i++){
            multiply=nums[i]*nums[i-1];
            dp[i]=max(multiply,dp[i-1]);
        }
        return dp[n-1];
}
int main(){
    vector<int>v{2,3,-2,4};
    cout<<rob(v);
}