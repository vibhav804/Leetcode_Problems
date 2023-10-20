//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lmax[n]; lmax[0]=arr[0];
        for(int i=1;i<n-1;i++)
        {
            int temp=max(arr[i],lmax[i-1]);
            lmax[i]=temp;
        }
        
        int rmax[n-1]; rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            int temp=max(arr[i],rmax[i+1]);
            rmax[i]=temp;
        }
        long long water=0;
        for(int i=1;i<n-1;i++)
        {
            water+=min(lmax[i],rmax[i])-arr[i];
        }
        return water;
    }
};




//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends