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
    int t,Case,n;
    string s;
    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        sf(n);
        cin>>s;


        if(n%2!=0)
        {
            if(s=="Alice")
                printf("Case %d: Bob\n",Case);
            else
                printf("Case %d: Alice\n",Case);
        }
        else
        {
            if(s=="Alice")
                printf("Case %d: Alice\n",Case);
            else
                printf("Case %d: Bob\n",Case);
        }
    }

    return 0;
}

