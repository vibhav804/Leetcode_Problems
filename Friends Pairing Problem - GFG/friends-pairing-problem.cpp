//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int mod= 1000000007;
    int countFriendsPairings(int n) 
    { 
        // code here
        if(n==0||n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        long long int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]%mod+((i-1)*dp[i-2])%mod)%mod;
        }
        return dp[n];
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
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends