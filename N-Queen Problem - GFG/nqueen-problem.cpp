//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
public:
bool issafe(int row, int col, vector<vector<int>>&board,int n){
    int x=row;
    int y=col;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=row;
    y=col;
  
    while(y>=0){
        if(board[x][y]==1){
            return false;
        }
        y--;
    }
    
    x=row;
    y=col;
    while(x < n && y>=0){
        if(board[x][y]==1) return false;
        
        x++;
        y--;
    }
    return true;
}
void solve(int col, vector<vector<int>>&board,vector<int>&temp,vector<vector<int>>&ans
,int n){
    if(col==n){
        ans.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            temp.push_back(row+1);
            board[row][col]=1;
            solve(col+1,board,temp,ans,n);
            board[row][col]=0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<int>temp;
        vector<vector<int>>ans;
        int col=0;
        solve(col,board,temp,ans,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends