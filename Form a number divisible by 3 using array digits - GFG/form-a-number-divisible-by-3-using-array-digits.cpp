//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int tot = 0;
        for(int i = 0;i<N;i++)
        {
            int num = arr[i];
            int s = 0;
            while(num!=0)
            {
                s+=(num%10);
                num/=10;
            }
           tot+=s;
            
        }
        int ans = 1;
        if(tot%3)
        ans = 0;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends