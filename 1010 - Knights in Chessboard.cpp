#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,ans;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        int m,n,p,q;
        cin>>m>>n;
        ans=0;
        if(m==1)
            printf("Case %d: %d\n",i,n);
        else if(n==1)
            printf("Case %d: %d\n",i,m);
        else if(m==2 && n==2)
            printf("Case %d: %d\n",i,4);
        else if(m==2 && n>2 || n==2 && m>2)
        {
            if(m==2)
                swap(n,m);

            if(m%2==0 && m%4!=0)
            {
                printf("Case %d: %d\n",i,2+m);
            }
            else if(m%2!=0)
            {
                printf("Case %d: %d\n",i,1+m);

            }
            else
                printf("Case %d: %d\n",i,m);
        }
        else
        {

            if(n%2==0)
            {
                p=n/2;
                q=n/2;
            }
            else
            {
                p=(n+1)/2;
                q=n/2;
            }

            if(m%2==0)
            {
                ans=(m/2)*p+(m/2)*q;
            }
            else
            {
                ans=(((m+1)/2)*p)+((m/2)*q);
            }

            printf("Case %d: %d\n",i,ans);
        }

    }
    return 0;
}

