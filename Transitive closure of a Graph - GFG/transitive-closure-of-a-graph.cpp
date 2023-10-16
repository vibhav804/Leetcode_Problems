//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

// Back-end complete function Template for C++

class Solution{
public:
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> graph)
    {
        for(int via = 0; via < n; via++) 
            for(int src = 0; src < n; src++)
                for(int dest = 0; dest < n; dest++)
                    if(graph[src][via] && graph[via][dest] || src == dest)
                        graph[src][dest] = 1;
        return graph;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends