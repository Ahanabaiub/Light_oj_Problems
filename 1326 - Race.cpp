#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

const int mod=10056;

int dp[1050],nCr[1005][1005];

int calnCr( )
{
    /*if(n==r)
        return 1;
    if(r==1)
        return n;

    if(com[n][r]!=0)
        return com[n][r];

    int ans=0;

    ans=(nCr(n-1,r-1)+nCr(n-1,r))%mod;

    com[n][r]=ans%mod;

    return com[n][r];*/

    nCr[1][1]=1;
    nCr[1][0]=1;

    for(int i=2; i<=1000; i++)
    {
        nCr[i][0]=1;
        nCr[i][i]=1;

        for(int j=1; j<i; j++)
        {

            nCr[i][j]=(nCr[i-1][j-1]%mod+nCr[i-1][j]%mod)%mod;
            nCr[i][j]=nCr[i][j]%mod;
        }
    }
}

int fn(int n)
{
    //if(n==1)
        //return 1;

    if(dp[n]!=0)
            return dp[n];

    int cnt=0;

    for(int i=1; i<n; i++)
    {
        cnt=(cnt%mod)+(nCr[n][i])%mod*(fn(n-i))%mod;
        cnt=cnt%mod;
    }

    dp[n]=cnt;

    //return dp[n];
}

int main()
{
    int t,Case;

    calnCr();

    /* for(int i=1; i<=100; i++)
    {

        for(int j=1; j<=i; j++)
        {
            //cout<<nCr[i][j]<<" ";
            printf("%lld ",nCr[i][j]);
        }
        //cout<<nl;
        printf("\n");
    }*/

    dp[0]=1;
    dp[1]=1;

    fn(1000);

    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        int n,ans=0;

        sf(n);

        ans=fn(n);

        printf("Case %d: %d\n",Case,dp[n]);
    }

    return 0;
}

