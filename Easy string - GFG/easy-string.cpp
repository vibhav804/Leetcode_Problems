//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends



string transform(string s){
    //complete the function here
    if (s.empty()) return s;
    
    string ans;
    int cnt = 1;
    char prev = tolower(s[0]);
    
    for(int i = 1; i < s.size(); ++ i) {
        char c = tolower(s[i]);
        
        if (c == prev) cnt ++;
        else {
            ans += to_string(cnt);
            ans += prev;
            cnt = 1;
            prev = c;
        }
    }
    
    ans += to_string(cnt);
    ans += prev;
    
    return ans;

}

