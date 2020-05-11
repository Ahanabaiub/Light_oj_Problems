#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,Case,x;
    char ch;

    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        int n,t,cnt=0;
        scanf("%d %d",&n,&t);

        int a[n];

        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(int l=1; l<=t; l++)
        {
           cin>>ch;

            if(ch=='S')
            {
                scanf("%d",&x);

                for(int j=0; j<n; j++)
                    a[j]+=x;
            }
            else if(ch=='M')
            {
                scanf("%d",&x);

                for(int j=0; j<n; j++)
                    a[j]*=x;
            }
            else if(ch=='D')
            {
                scanf("%d",&x);

                for(int j=0; j<n; j++)
                    a[j]/=x;
            }
            else if(ch=='R')
            {
                int b[n],x=n;

                for(int j=0; j<n; j++)
                    b[j]=a[--x];

                for(int j=0; j<n; j++)
                    a[j]=b[j];
            }
            else if(ch=='P')
            {
                int y,z;
                scanf("%d %d",&y,&z);

                swap(a[y],a[z]);
            }
        }
        printf("Case %d:\n",Case);
        for(i=0; i<n-1; i++)
            printf("%d ",a[i]);
        printf("%d\n",a[i]);
    }
    return 0;
}
