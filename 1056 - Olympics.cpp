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

    for(int Case=1; Case<=t;Case++)
    {
        double a,b;
        char ch;
        cin>>a>>ch>>b;

        double r=(sqrt((b*b)+(a*a)))/2.0;

        double angle=acos(((r*r)+(r*r)-(b*b))/(2.0*r*r));

        double s=r*angle;

        double q=400.0/(2*s+2*a);

        cout<<fixed;
        cout<<setprecision(10);
        cout<<"Case "<<Case<<": "<<a*q<<" "<<b*q<<nl;


    }


    return 0;
}
