//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution{
public:
    bool happy(int n,int i)
    {  if(i==50)
        return n==1;
       int s=0,t=n;
       while(t)
       {   int d=t%10;
           s+=d*d;
           t/=10;
       }
        return happy(s,i+1);
    }
    int nextHappy(int n){
        int i=0;
        while(true)
        {
            ++n;
            if(happy(n,i))
            return n;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends