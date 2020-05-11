#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

ll dp[1000][1000];

/*ll nCr(int p,int q)
{
    if(p==q)
        return 1;
    if(q==1)
        return p;

    if(dp[p][q]!=-1)
        return dp[p][q];

    dp[p][q]=nCr(p-1,q)+nCr(p-1,q-1);

    return dp[p][q];
}*/

ll nCr(int n,int r)
{
    if(n==r)return 1;
    if(r==1)return n;
    if(r==0)return 1;

    if(dp[n][r]!=0)return dp[n][r];

    //return nCr(n-1,r)+nCr(n-1,r-1);
    dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    return dp[n][r];
}

int main()
{
    int t,Case;

    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        int n,k;

        sf(n);sf(k);

        if(k>n)
            printf("Case %d: 0\n",Case);
       else
       {

             ll per=1;

             int x=n,p=k;

             while(p--)
             {
                 per*=x;
                 x--;
             }

             //nCr(n,k);

             //pfl(com);

             //cout<<nCr(n,k)*per<<nl;

             printf("Case %d: %lld\n",Case,per*nCr(n,k));

       }


    }


    return 0;
}

