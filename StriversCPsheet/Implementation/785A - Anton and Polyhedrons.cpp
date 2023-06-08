#include <bits/stdc++.h>
#define           fastIO  (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll        long long int
#define nl        endl
#define sz(x)     (int)x.size()
#define v(i)      vector<int> v[i];
#define sortv(a)  sort(a.begin(),a.end())
#define eb        emplace_back
#define cout(q)   cout<<q<<endl; 
#define f(i,n)    for(int i = 0 ; i < n ; i ++)
#define f1(i,n)   for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)   for(int i = n - 1 ; i >= 0 ; i --)
#define test(t)   ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    map<string, int> mpp;
    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12;
    mpp["Icosahedron"] = 20;

    int n, sum = 0;
    cin >> n;

    f (i, n) {
        string s;
        cin >> s;

        sum += mpp[s];
    }

    cout(sum);
}

int main() {
    fastIO;
    solve();
    return 0;
}
