#include<bits/stdc++.h>
//#define long long ll
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);

    long long a[21]={1,1,2,6,24,120,
    720,5040,40320,362880,3628800,39916800,
    479001600,6227020800,87178291200,
    1307674368000,20922789888000,
    355687428096000,6402373705728000,121645100408832000,2432902008176640000};

    //cout<<a[0]<<endl;
    //cout<<a[1]<<endl;
    for(Case=1; Case<=T; Case++)
    {
        long long n;
        int i;
        int cnt=0;
        scanf("%lld",&n);

        bool fact[100];

        memset(fact,0,sizeof(fact));

        for(i=20; i>=0; i--)
        {
            if(n>=a[i] && n>=0)
            {
                n-=a[i];
                fact[i]=1;
                cnt++;
            }
        }
        printf("Case %d: ",Case);

        if(n==0)
        {
            for(i=0; i<25; i++)
            {
                if(fact[i]==1 && cnt>1)
                {

                    cout<<i<<"!+";
                    cnt--;
                }
                else if(fact[i]==1 && cnt==1)
                {
                    cout<<i<<"!\n";
                }

            }
        }
        else
            cout<<"impossible\n";

    }
}
