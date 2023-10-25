//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int recursion(int n, int dp[]) {
            if (!n)
                return 0;
            else if (dp[n] != -1)
                return dp[n];
            
            int t = max(n / 2, recursion(n / 2, dp));
            int m = max(n / 3, recursion(n / 3, dp));
            int p = max(n / 4, recursion(n / 4, dp));
            
            return dp[n] = max(n, t + m + p);
        }
    
        int maxSum(int n)
        {
            //code here.
               int dp[n + 1];
            memset(dp, -1, sizeof(dp));
            
            return recursion(n, dp);
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
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends