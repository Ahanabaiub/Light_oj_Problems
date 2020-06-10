#include<bits/stdc++.h>
#define    fios ios_base::sync_with_stdio(false); cin.tie(0);
#define    sf(x) scanf("%d",&x)
#define    sfl(x) scanf("%lld",&x)
#define    pf(x) printf("%d\n",x)
#define    pfl(x) printf("%lld\n",x)
#define    ll long long
#define    nl "\n"
#define    PB(x) push_back(x)
#define    For(i,n) for(int i=0; i<n; i++)
#define    PI acos(-1)
using namespace std;


int main()
{
    int t;
    cin>>t;

    for(int Case=1; Case<=t; Case++)
    {
        ll n;
        cin>>n;

        cout<<"Case "<<Case<<": ";

        if(n==1)
        {

            cout<<"1 1"<<nl;
            continue;
        }

        ll sq=ceil(sqrt(n));

        sq--;

        ll diagonal=2*((sq*(sq+1))/2)+1;

         ll x=sq+1,y=sq+1;

        if(sq%2!=0)
        {
            if(diagonal-n>=0)
            {

                x-=(diagonal-n);
            }
            else
            {

                y-=(n-diagonal);
            }

        }
        else
        {
             if(diagonal-n>=0)
            {

                y-=(diagonal-n);
            }
            else
            {

                x-=(n-diagonal);
            }

        }

        cout<<x<<" "<<y<<nl;

    }


    return 0;
}



