//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution {
  public:
    // Returns count of numbers with k as last 
    // digit. 
    // Function to count the numbers with K as last digit given a range

    int countLastDigitK(long long low, long long high, long long K) {
        
        long long mlow = 10 * ceil(low/10.0);
        long long mhigh = 10 * floor(high/10.0);
        int count = (mhigh - mlow)/10; 
        if (high % 10 >= K) 
            count++; 
        if (low % 10 <=K && (low%10))
            count++;
        return count; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long low, high, K;
        
        cin>>low>>high>>K;

        Solution ob;
        cout << ob.countLastDigitK(low,high,K) << endl;
    }
    return 0;
}
// } Driver Code Ends