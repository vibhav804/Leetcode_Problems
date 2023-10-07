//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<int> DistinctSum(vector<int>nums){
	    // Code here
	    int sum=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        sum+=nums[i];
	    }
	    int n=nums.size();
	    
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
	    dp[0][0]=1;
	    
	    for(int r=1;r<n+1;r++)
	    {
	        for(int c=0;c<sum+1;c++)
	        {
	            if(dp[r-1][c]==1)
	            dp[r][c]=1;
	            else if(c-nums[r-1]>=0 && dp[r-1][c-nums[r-1]]==1)
	            {
	                dp[r][c]=1;
	            }
	        }
	    }
	    
	    vector<int>ans;
	    for(int i=0;i<sum+1;i++)
	    {
	        if(dp[n][i]==1)
	        ans.push_back(i);
	    }
	    
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}

// } Driver Code Ends