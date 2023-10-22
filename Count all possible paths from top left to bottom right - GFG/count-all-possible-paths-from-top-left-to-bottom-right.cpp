//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
     
    const int MOD = 1000000007;

    long long int numberOfPaths(int m, int n){
        vector<vector<long long>> mat(m, vector<long long>(n, 0));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || j == 0) {
                    mat[i][j] = 1;
                } else {
                    mat[i][j] = (mat[i - 1][j] + mat[i][j - 1]) % MOD;
                }
            }
        }
        
        return mat[m - 1][n - 1];
    }

};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends