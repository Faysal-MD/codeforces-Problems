#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;

    cin >> a >> b >> c;

    if((a+b == c) || (b+c == a) || (a+c == b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    while(n--) solve();

    return 0;
}
