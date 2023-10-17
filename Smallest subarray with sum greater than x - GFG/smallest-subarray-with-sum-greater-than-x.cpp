//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int len=INT_MAX;
       
        int i=-1;
        int j=0;
        int sum=0;
        while(i<n  )
        {
           
            if(sum<=x)
            {
              i++;   
             sum=sum+arr[i];
               
            }
            else{
                len=min(len,(i-j+1));
                sum=sum-arr[j];
                j++;
            }
            
        }
        if(len==INT_MAX)
        {
            return 0;
        }
        else{
            return len;
        }
    }
};






//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends