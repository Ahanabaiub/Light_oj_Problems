#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

//int sz=1000005;
int a[1000005];

int main()
{
    int t,Case;

    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        int n,i,x,ans=0;

        sf(n);

        //int a[n];
        /*set<int>s;

        set<int>::iterator it;

        for(i=0; i<n; i++){
            sf(tem);
            s.insert(tem);
        }

        for(it=s.begin(); it!=s.end(); it++)
            ans+=(*it+1);*/


        // memset(a,-1,sizeof(a));

        for(i=0; i<n; i++)
        {
            sf(x);
            a[x]++;
        }
        if(a[0]>0)
            ans+=a[0];

        for(i=1; i<1000005; i++)
        {
            if(a[i]!=0)
            {
                //if(a[i]<=i)
                    //ans+=(i+1);
                //else
                //{
                    int fr=a[i]/i;
                    ans+=(i+1)*fr;

                    if(a[i]-(i*fr)>0)
                        ans+=(i+1);
                //}
            }
        }


        printf("Case %d: %d\n",Case,ans);

    }

    return 0;
}

