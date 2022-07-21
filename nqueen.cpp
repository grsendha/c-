#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
   vector<vector<int>> ans;
   
   bool isSafe(int row, int col, int n, vector<vector<int>> &board){
       for(int i=0;i<col;i++){
           if(board[row][i]==1) return false;
       }
       for(int i=row,j=col; i>=0 && j>=0; i--,j--){
           if(board[i][j]==1) return false;
       }
       for(int i=row,j=col;i<n && j>=0;i++,j--){
           if(board[i][j]==1) return false;
       }
       return true;
   }
   
   // vector<int> cases;
   
   void solveRec(int col, int n, vector<vector<int>> &board, vector<int> &cases){
       if(col==n){
           ans.push_back(cases);
           // cases.clear();
           return;
       }
       for(int i=0;i<n;i++){
           if(isSafe(i,col,n,board)){
               board[i][col]=1;
               cases.push_back(i+1);
               solveRec(col+1,n,board,cases);
               cases.pop_back();
               board[i][col]=0;
           }
       }
   }
   
   vector<vector<int>> nQueen(int n) {
       // code here
       vector<vector<int>> board(n,vector<int>(n,0));
       vector<int> cases;
       solveRec(0,n,board,cases);
       return ans;
   }
};
int main(){
    Solution s;
    vector<vector<int>>ans;
    ans=s.nQueen(4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}