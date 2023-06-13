#include <bits/stdc++.h>
#define fastIO    (ios::sync_with_stdio(0),cin.tie(0),cout.tie(0));
#define ll        long long int
#define nl        endl
#define sz(x)     (ll)x.size()
#define v(i)      vector<int>v[i];
#define vec       vector<int>vec;
#define sortv(a)  sort(a.begin(),a.end())
#define eb        emplace_back
#define cout(q)   cout<<q<<endl; 
#define pyes      cout<<"YES"<<endl 
#define pno       cout<<"NO"<<endl
#define f(i,n)    for(int i = 0 ; i < n ; i ++)
#define f1(i,n)   for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)   for(int i = n - 1 ; i >= 0 ; i --)
#define FO(x) for (int i = 0; i < x; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ROF(x) for (int i = x; i >= 0; i--)
#define test(t)   ll t; cin>>t; while(t--)

using namespace std;

void solve() {
    string s1, s2 ,s3;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    f(i, sz(s1)) {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            cnt1++;
    }
    f(i, sz(s2)) {
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
            cnt2++;
    }
    f(i, sz(s3)) {
        if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
            cnt3++;
    }
    if (cnt1 == 5 && cnt2 == 7 && cnt3 == 5) pyes;
    else pno;
}

int32_t main() {
    /*if input file is given and output file needs to be generated
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    fastIO;
    solve();
    
    return 0;
}