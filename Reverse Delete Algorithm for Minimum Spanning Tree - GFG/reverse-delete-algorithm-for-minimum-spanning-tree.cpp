//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int RevDelMST(int Arr[], int V, int E) {
        // code here
       vector<vector<int>> adjl(V);
        vector<vector<int>> edges;
        for(int i=0;i<3*E;i+=3){
            edges.push_back({Arr[i+2], Arr[i], Arr[i+1]});
            adjl[Arr[i]].push_back(Arr[i+1]);
            adjl[Arr[i+1]].push_back(Arr[i]);
        }
        
        sort(edges.begin(), edges.end(),greater<vector<int>>());
        
        int ans=0;
        
        for(auto v: edges){
            if(!isConnected(adjl,v[1],v[2],V)){
                ans+= v[0];
            }
        }
        return ans;
    }
    
    bool isConnected(vector<vector<int>> &adjl, int x,int y,int V)
    {
        
        vector<bool> vis(V,0);
        
        if(dfs(adjl,x,x,y,vis)){
            for(auto &i: adjl[x]){
                if(i==y) i=-1;
            }
            
            for(auto &i: adjl[y]){
                if(i==x) i=-1;
            }
            return true;
        }
    
        return false;
    }
    
    bool dfs(vector<vector<int>> &adjl,int node, int &x,int &y, vector<bool> &vis)
    {
        if(node==y){
            return true;
        }
        
        vis[node]=1;
        for(auto i: adjl[node]){
            if(i==-1) continue;
            if(node==x && i==y) continue;
            if(!vis[i] && dfs(adjl,i,x,y,vis)){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,E;
        cin>>V>>E;

        int Arr[3*E];
        for(int i=0; i<3*E; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.RevDelMST(Arr,V,E) << endl;
    }
    return 0;
}
// } Driver Code Ends