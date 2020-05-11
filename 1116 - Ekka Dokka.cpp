#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long p,i,Case,T;


    long long w;

    cin>>T;
    for(Case=1; Case<=T; Case++)
    {
        int flag=0;
        cin>>w;

        if(w%2==0)
        {

            p=1;
            while(w%2==0)
            {
                p*=2;
                w/=2;
            }
            printf("Case %lld: %lld %lld\n",Case,w,p);
        }
        else
            printf("Case %lld: Impossible\n",Case);

    }



return 0;
}
