//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


vector<vector<long long>> mul(vector<vector<long long>> &m1,vector<vector<long long>> &m2,long long m)
{
    vector<vector<long long>> ans(3,vector<long long>(3,0));
    
    for(long long i=0;i<3;i++)
    {
        for(long long j=0;j<3;j++)
        {
            for(long long k=0;k<3;k++)
            {
                ans[i][j]+=(m1[i][k]*m2[k][j]);
                ans[i][j]%=m;
            }
        }
    }
    
    return ans;
}

vector<vector<long long>> binExp(vector<vector<long long>> mat,long long n,long long m)
{
    vector<vector<long long>> ans={{1,0,0},{0,1,0},{0,0,1}};
    
    while(n!=0)
    {
        if((n%2)==1) ans=mul(ans,mat,m);
        mat=mul(mat,mat,m);
        n/=2;
    }
    
    return ans;
}

class Solution {
  public:
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        
        if(m==1) return 0;
        if(n==1) return 1;
        else if(n==2) return 1;
        
        vector<vector<long long>> mat={{a,b,1},{1,0,0},{0,0,1}};
        
        mat=binExp(mat,n-2,m);
        long long ans=(mat[0][0]+mat[0][1]+c*mat[0][2])%m;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,n,m;
        
        cin>>a>>b>>c>>n>>m;

        Solution ob;
        cout << ob.genFibNum(a,b,c,n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends