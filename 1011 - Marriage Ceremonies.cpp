#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

int n,a[20][20],used[20],number[20],i,j,Max=0;

int permutation(int pos)
{
    if(pos==n)
    {
        int sum=0;
        for(j=0; j<n; j++)
        {
            //sum+=(a[j][number[j]]);
            cout<<number[i]<<" ";;

        }
        cout<<nl;
        if(sum>Max)
            Max=sum;

        return 0;
    }

    for(i=0; i<n; i++)
    {
        if(!used[i])
        {
            used[i]=1;
            number[pos]=i;
            permutation(pos+1);
            used[i]=0;
        }
    }

    return Max;
}

int main()
{
    int t,Case;
    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        sf(n);

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                sf(a[i][j]);
        }

        int ans=permutation(0);

        printf("Case %d: %d\n",Case,ans);
    }
    return 0;
}

