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

        double R,n;
        cin>>R>>n;

        double theta=(PI/n);

        double r=((R*sin(theta))/(1+sin(theta)));

        cout<<fixed;
        cout<<setprecision(10);
        cout<<"Case "<<Case<<": "<<r<<nl;
    }


    return 0;
}
