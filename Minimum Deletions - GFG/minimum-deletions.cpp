//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.length();
        
        int dp[n][n];
        for(int g=0;g<n;g++)
        {
            for(int i =0,j=g;j<n;i++,j++)
            {
                if(g==0)
                {
                    dp[i][j] = 1;
                }
                else if(g==1)
                {
                    if(S[i]==S[j])
                    {
                        dp[i][j] = 2;
                    }
                    else dp[i][j] = 1;
                }
                else
                {
                    if(S[i]==S[j])
                    {
                        dp[i][j] = 2 + dp[i+1][j-1];
                        
                    }
                    else
                    {
                        dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
                    }
                    
                }
            }
        }
        int ans = n-dp[0][n-1];
        return ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends