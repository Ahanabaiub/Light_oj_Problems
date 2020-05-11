#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
using namespace std;

//const int lim=sqrt(2147483648);

int main()
{
    int t,Case,i;
    int p,l;
    sf(t);

    for(Case=1; Case<=t; Case++)
    {
        sf(p);
        sf(l);

        int div=p-l;

        if(l>=div)
            printf("Case %d: impossible\n",Case);
        else
        {
            vector<int>divisors;

            //int divisors[lim+5],x=-1;
            int sq=sqrt(div);

            for(i=1; i<=sq; i++)
            {
                if(div%i==0)
                {
                    if(i>l)
                    divisors.push_back(i);

                    int q=div/i;

                    if(q!=i && q>l)
                        divisors.push_back(q);

                }
            }

                 sort(divisors.begin(),divisors.end());

                int len=divisors.size();

           if(len==0)
           {
              printf("Case %d: impossible\n",Case);
           }
           else
              {

            printf("Case %d:",Case);


            for(i=0; i<len; i++)
                printf(" %d",divisors[i]);

            printf("\n");
              }

        }

    }

    return 0;
}

