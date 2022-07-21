#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int n=grid.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j and grid[i][j]==0) {
                    return false;
                }
                else if((i+j)==n-1 and grid[i][j]==0 ){
                    return false;
                }
                else if(i!=j and (i+j)!=n-1 and grid[i][j]!=0 ){
                    return false;
                }
                
            }
        }
        
        return true;
    }
};
int main(){
    vector<vector<int>>v{{2,0,0,1},{0,3,1,0},{0,5,2,0},{4,0,0,2}};
    Solution s;
    bool b=s.checkXMatrix(v);
    cout<<b;
    
}