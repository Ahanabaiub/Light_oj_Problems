#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

const int lim=5000001;

unsigned long long phi[lim+1];
//bool mark[lim+1];

//unsigned long long scor[lim+1];

void sievephi()
{
    int i,j;

    for(i=1; i<lim; i++)
        phi[i]=i;

    phi[1]=1;
    //mark[1]=1;

    for(i=2; i<lim; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<lim; j+=i)
            {
                //mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main()
{
    int t,Case,a,b,i;

    sievephi();

    phi[1]=phi[1]*phi[1];

    for(i=2; i<lim; i++)
        phi[i]=phi[i-1]+(phi[i]*phi[i]);

    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        sf(a);sf(b);

        printf("Case %d: %llu\n",Case,phi[b]-phi[a-1]);

    }

    return 0;
}

