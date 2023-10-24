//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int n) {
        // code here
        int count = 0, neg = 0, pos = 0, zer = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                neg++;
            }
            else if(arr[i] == 0){
                zer++;
            }
            else{
                pos++;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                count += -arr[i] - 1;
            }
            if(arr[i] > 0){
                count += arr[i] - 1;
            }
        }
        
        if(zer == 0){
            if(neg %2 != 0){
                count += 2;
            }
        }
        if(zer > 0){
            count += zer;
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends