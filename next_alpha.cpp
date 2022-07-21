#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        char res='#';
        while(start<=end){
            int mid=start+((end-start)/2);
            if(letters[mid]==target){
                start=mid+1;
            }
            else if(letters[mid]<target){
                start=mid+1;
            }
            else if(letters[mid]>target){
                res=letters[mid];
                end=mid-1;
            }
        }
        return res;
    }
};
int main(){
       Solution s;
        vector<char>letters{'c','f','j'};
        char target='g';      
       char ans=s.nextGreatestLetter(letters,target);
       cout<<ans;
}