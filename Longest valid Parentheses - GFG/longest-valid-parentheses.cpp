//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution{
public:
    int maxLength(string S){
        // code here
        int len=0; 
        stack<int> st;
        st.push(-1);
        
        int size=S.length();
        for(int i=0; i<size; i++){
            if(S[i]=='(')
                st.push(i);
                
            else{
                st.pop();
                if(st.empty())
                    st.push(i);
                else{
                    len = max(len,i-st.top());
                }
            }
        }
        return len;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends