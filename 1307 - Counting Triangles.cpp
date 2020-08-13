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
    int Case=1;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;
        int val;
        ll cnt=0;

        for(int i=0; i<n; i++)
        {
            cin>>val;
            v.push_back(val);

        }

        sort(v.begin(),v.end());

        for(int i=0; i<n-2; i++)
        {

            for(int j=i+1; j<n-1; j++)
            {

                int ind=upper_bound(v.begin(),v.end(),v[i]+v[j]-1)-v.begin()-1;
                cnt+=ind-j;
            }
        }

        cout<<"Case "<<Case++<<": "<<cnt<<nl;

    }


    return 0;
}
