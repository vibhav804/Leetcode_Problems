//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long sum1=a[0],sum2=a[n-1];
        long long k=0;
        long long l=n-1;
        for(int i=0;i<n;i++){
            if(sum1==sum2){
                if(k+1==l-1){
                    return k+2;
                }else if(k==l){
                    return k+1;
                 }else{
                    sum1=sum1+a[k+1];
                    sum2=sum2+a[l-1];
                    k++;
                    l--;
                }
            }if(sum1>sum2){
                    while(sum1>sum2 && l>=0){
                    sum2=sum2+a[l-1];
                    l--;
                }
            }if(sum2>sum1){
                    while(sum2>sum1 && k<=n){
                    sum1=sum1+a[k+1];
                    k++;
                }
             }
    
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends