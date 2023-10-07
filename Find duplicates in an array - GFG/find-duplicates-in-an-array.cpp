//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<long long,int> mpp;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
            
            
        }
        for(int i=0;i<n;i++)
        {
            if(mpp[arr[i]]>1)
            {
                ans.push_back(arr[i]);
                mpp[arr[i]]=0;
            }
        }
        sort(ans.begin(),ans.end());
        
        if(ans.empty())
        {
            ans.push_back(-1);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends