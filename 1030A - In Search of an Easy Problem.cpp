#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, flag = 0;
    cin>>n;

    while(n--)
    {
        cin>>x;

        if(x == 1) flag = 1;
    }

    if(flag) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}

int main()
{
    solve();

    return 0;
}
