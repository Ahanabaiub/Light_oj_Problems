#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x);
#define sfl(x) scanf("%lld",&x);
#define pf(x); printf("%d\n",x);
#define pfl(x); printf("%lld\n",x);
#define ll long long
#define nl "\n"
using namespace std;

int const mod=1e8+7;
int n,k;

ll dp[52][1005],a[52],c[52];


ll fn(int pos,int ammount)
{
    if(pos>n-1)
        {
            if(ammount==k)
                return 1;

                return 0;
        }

    if(dp[pos][ammount]!=-1)
        return dp[pos][ammount];

    ll ret=0;

    for(int taken=1; taken<=c[pos]; taken++)
    {
        if(ammount+(taken*a[pos])<=k)
        {
            ret+=fn(pos+1,ammount+(taken*a[pos]))%mod;
        }
        else
            break;
    }


    ret+=fn(pos+1,ammount)%mod;

    return dp[pos][ammount]=ret%mod;
}

int main()
{
    int t,i,ca=0;
    sf(t);

    while(t--)
    {
        memset(dp,-1,sizeof(dp));

        sf(n);
        sf(k);

        for(i=0; i<n; i++)
            sf(a[i]);

        for(i=0; i<n; i++)
            sf(c[i]);

        printf("Case %d: %d\n",++ca,fn(0,0)%mod);

    }

    return 0;
}

