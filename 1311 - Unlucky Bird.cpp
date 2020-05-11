#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    ios;
    ll t,Case;

    cin>>t;

    for(Case=1; Case<=t; Case++)
    {
        double v1,v2,v3,a1,a2,s1,s2,T1,bdis;
        cin>>v1>>v2>>v3>>a1>>a2;

        s1=(v1*v1)/(2*a1);
        s2=(v2*v2)/(2*a2);
        T1=v1/a1;
        double T2=v2/a2;
        bdis=max(T1,T2)*v3;
        printf("Case %lld: %.10lf %.10lf\n",Case,s1+s2,bdis);
    }

    return 0;
}
