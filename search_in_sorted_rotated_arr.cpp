#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int N=nums.size();
        int ansIndex;
        while(start<=end){
            int mid=start +((end-start)/2);
            int next=(mid+1)%N;
            int prev=(mid+N-1)%N;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
                ansIndex=mid;
                break;
            }
            if(nums[0]<=nums[nums.size()-1]){
                return binarySearch(0,nums.size()-1,nums,target);
            }
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }
            if(nums[nums.size()-1]>=nums[mid]){
                end=mid-1;
            }
        }
        int right=binarySearch(ansIndex,nums.size()-1,nums,target);
        int left=binarySearch(0,ansIndex-1,nums,target);
        
        if(left!=-1 && right==-1) return left;
        else if(left==-1 && right!=-1) return right;
        else return -1;
         
    }
    int binarySearch(int start,int end,vector<int>& nums,int target){
        int st=start;
        int ed=end;
        while(st<=ed){
            int mid=st+((ed-st)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(target<=nums[mid]){
                ed=mid-1;
            }
            else {
                st=mid+1;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>nums{4,5,6,7,0,1,2};
    int target=0;
    int ans=s.search(nums,target);
    cout<<ans;
}