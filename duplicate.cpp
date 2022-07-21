#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int maxsum=0;
        unordered_map<int,int>m;
        int ans=INT_MIN;
        
        while(j<nums.size()){
            maxsum+=nums[j];
            // m[nums[i]]=i;
            while(m.find(nums[j])!=m.end()){
                maxsum-=nums[i];
                m.erase(nums[i]);
                i++;
            }
            ans=max(ans,maxsum);
            m[nums[j]]=j;
            j++;
            
            
        }
        return maxsum;
    }
};
int main(){
    Solution s;
    vector<int>v{4,2,4,5,6};
    cout<<s.maximumUniqueSubarray(v);
}