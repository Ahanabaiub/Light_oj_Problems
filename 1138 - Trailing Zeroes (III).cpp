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

int check(int n)
{
    int cnt=0;

    while(n)
    {
        cnt+=(n/5);
        n/=5;

    }
    return cnt;

}

int trZeros(int n)
{
    int low=5;
    int high=5*n+10,mid,zr;
    int ans=high;

    while(low<high)
    {
        mid=(low+high)/2;
        zr=check(mid);

        if(zr==n)
        {
            ans=mid;
            high=mid;
        }
        else if(zr<n)
        {
            low=mid+1;
        }
        else
            high=mid;


    }

    return ans;


}

int main()
{

    int t;
    cin>>t;

    int Case=1;

    while(t--)
    {
        int n;
        cin>>n;

        int ans=trZeros(n);


        cout<<"Case "<<Case++<<": ";

        if(ans!=5*n+10)
        {
            cout<<ans<<nl;
        }
        else
            cout<<"impossible"<<nl;

    }


    return 0;
}
