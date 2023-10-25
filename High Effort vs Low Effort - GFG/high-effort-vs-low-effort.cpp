//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends


#include<bits/stdc++.h>
class Solution
{
    public:
    int solve(int ind, int hi[], int li[], vector<int>&dp){
        if(ind<0)return 0;
        int maxi=0;
        if(dp[ind]!= -1)return dp[ind];
        maxi = max(hi[ind] + solve(ind-2, hi, li, dp), li[ind] + solve(ind-1, hi, li,dp));
        return dp[ind] = maxi;
    }
        int maxAmt(int n , int hi[] , int li[])
        {
            vector<int> dp(n, -1);   
            return solve(n-1,hi, li, dp );
        }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            int hi[n] , li[n];
            for(int i = 0 ;i<n;i++)
                cin>>hi[i];
            for(int i = 0 ;i<n;i++)
                cin>>li[i];
            Solution ob;
            cout<<ob.maxAmt(n,hi,li)<<endl;    
        }
}
// } Driver Code Ends