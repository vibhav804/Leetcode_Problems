//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution
{
    public:
    //Function to merge two nodes a and b.
    int find(int x,int parent[])
    {
        if(parent[x] == x)
            return x;
            
        parent[x] = find(parent[x],parent);
        return parent[x];
        
    }
    void union_( int a, int b, int parent[], int rank1[]) 
    {
        int xRep = find(a,parent) , yRep = find(b,parent);
        if(xRep == yRep)
            return;
            
        if(rank1[xRep]<rank1[yRep])
            parent[xRep] = yRep;
            
        else if(rank1[yRep]<rank1[xRep])
            parent[yRep] = xRep;
            
        else
        {
            parent[yRep] = xRep;
            rank1[xRep]++;
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        int a = find(x,par);
        int b = find(y,par);
        
        return (a==b);
    }
};



//{ Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}

// } Driver Code Ends