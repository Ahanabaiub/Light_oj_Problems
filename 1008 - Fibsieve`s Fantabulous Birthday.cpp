#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;


int main()
{
    int t,Case;
    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        ll n,x,y,cnt=1,num=1,p=1;
        sfl(n);

        while(num<=n)
        {
            if(p%2=0)
            {
                p++;
                num+=1;
                cnt++;

            }
            else
            {
                cnt+=cnt+2;
                num+=cnt;
                p++;
            }
        }


    }

    return 0;
}

