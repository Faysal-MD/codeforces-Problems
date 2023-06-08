#include <bits/stdc++.h>
#define fastIO (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));

using namespace std;

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            for(int i=0; i<s.size(); i++) {
                if (s[i] == s[i+1]) cout << s[i];
                // else if (s[i] == s[i+2]) cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}