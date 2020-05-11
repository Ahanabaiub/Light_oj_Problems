#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,p,i;
    scanf("%d",&T);

    bool a[40],c[40];

    for(p=1; p<=T; p++)
    {
        long long x,sum=0;

        memset(a,0,sizeof(a));
        memset(c,0,sizeof(c));

        scanf("%lld",&x);
        int q=-1;

        while(x!=0)
        {
            if(x%2==0)
                c[++q]=0;
            else
                c[++q]=1;

            x/=2;
        }

        int n=q,nz=0,no=0;
        q=0;
        for(i=39; i>=0; i--)
        {
            a[i]=c[q++];

        }

        for(i=38; i>=0; i--)
        {
            if(a[i]==0 && a[i+1]==1)
            {
                n=i;
                break;
            }
        }
        for(i=n+1; i<40; i++)
        {
            if(a[i]==0)
                nz++;
            if(a[i]==1)
                no++;
        }

        nz++;
        no--;
        i=n+1;
        a[n]=1;
        while(nz--)
            a[i++]=0;

        while(no--)
            a[i++]=1;

        for(q=0; q<40; q++)
        {
            if(a[39-q]==1)
                sum+=pow(2,q);
        }
        printf("Case %d: %d\n",p,sum);
    }
    return 0;
}

