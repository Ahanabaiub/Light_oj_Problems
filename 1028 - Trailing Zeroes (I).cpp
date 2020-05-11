#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

int const lim=1000005;

bool mark[lim+5];
int prime[78505],ind=0;

void sieve()
{
    mark[0]=mark[1]=1;

    for(int i=2; i*i<=lim; i++)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<=lim; j+=i)
                mark[j]=1;
        }
    }

    for(int i=2; i<=lim; i++)
    {
        if(!mark[i])
            prime[ind++]=i;
    }

}

int main()
{
    sieve();

    int t,Case;
    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        ll n,cnt=0,ans=1,i;
        sfl(n);


        for(i=0; prime[i]*prime[i]<=n && i<ind; i++)
        {
            cnt=0;

            while(n%prime[i]==0)
            {
                cnt++;
                n/=prime[i];
            }

            ans*=(cnt+1);
        }
        if(n>1)
            ans*=2;


        printf("Case %d: %lld\n",Case,ans-1);
    }


    return 0;
}

