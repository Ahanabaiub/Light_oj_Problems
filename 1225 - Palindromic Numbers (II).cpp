#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T,Case;
    scanf("%lld",&T);

    for(Case=1; Case<=T; Case++)
    {
        ll n,num,i,x;

        scanf("%lld",&n);
        x=n;

        num=n-(n/10)*10;
        n/=10;

        while(n>0)
        {
            num=(num*10)+n-(n/10)*10;
            n/=10;
        }

        if(x-num==0)
            printf("Case %lld: Yes\n",Case);
        else
            printf("Case %lld: No\n",Case);
    }
    return 0;
}
