//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
int table[256];
    
    int countsetbit(long long x){
        
        return (table[x&255]+table[(x>>8)&255]+table[(x>>16)&255]+table[x>>24]);
    }
    
int is_bleak(int n)
{
    // Code here.
   table[0]=0;
   for(int i=1;i<256;i++){
       table[i]=table[i&(i-1)]+1;
   }
   int largest_set_bit_count=log2(n);
   for(long long i=n-largest_set_bit_count-2;i<n;i++){
       long long x=i+countsetbit(i);
       if(x==n) return 0;
   }
   
    return 1;
}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends