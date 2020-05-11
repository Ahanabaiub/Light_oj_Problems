#include<bits/stdc++.h>
#define nl "\n"
#define ios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main()
{
    ios;

    ll n,m,t,i;
    cin>>t;

   for(i=1; i<=t; i++)
    {
        cin>>n>>m;
       ll difn=n/2;


        printf("Case %lld: %lld\n",i,difn*m);

    }

    return 0;
}
