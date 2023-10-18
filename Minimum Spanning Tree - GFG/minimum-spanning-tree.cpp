//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<bool> visited(V,false);
        set<pair<int,int>> st;
        // {weight, node}
        st.insert({0, 0});
        int sumWeight = 0;
        
        while(!st.empty()) {
            auto it = *(st.begin());
            int weight = it.first;
            int node = it.second;
            
            st.erase(it);
            
            if(visited[node]) continue;
            visited[node] = true;
            
            sumWeight += weight;
            
            for(auto itr : adj[node]) {
                int adjNode = itr[0];
                int eWt = itr[1];
                if(!visited[adjNode]) {
                    st.insert({eWt,adjNode});
                }
            }
        }
        return sumWeight;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends