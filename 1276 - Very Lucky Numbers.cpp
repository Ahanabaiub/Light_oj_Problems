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

vector<ll> v;
ll mx=1000000000005;
int sz;

void lucky(int d, ll num)
{
    if(d>12)
        return;

    v.PB(num);

    lucky(d+1,(num*10)+4);
    lucky(d+1,(num*10)+7);


}

void veryLucky(ll num, int i)
{
    if(num!=1)
        v.PB(num);

    for(int j=i; j<sz; j++)
    {
        if(num<=mx/v[j])
        {
            veryLucky(num*v[j],j);

        }
        else
            break;

    }

}

int main()
{
    int t;
    cin>>t;
    int Case=1;

     lucky(1,4);
     lucky(1,7);

     //cout<<v.size()<<endl;

     sort(v.begin(),v.end());
     sz=v.size();
     veryLucky(1,0);
     sort(v.begin(),v.end());
     v.erase(unique(v.begin(),v.end()),v.end());

    while(t--)
    {

        ll p,q;
        cin>>p>>q;

        ll up=upper_bound(v.begin(),v.end(),q)-v.begin();
        ll lw=lower_bound(v.begin(),v.end(),p)-v.begin();

        cout<<"Case "<<Case++<<": "<<up-lw<<endl;


    }


    return 0;
}
