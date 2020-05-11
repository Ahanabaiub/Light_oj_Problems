#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case,i;
    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        int n,cnt=0;

        scanf("%d",&n);

        int a[n];

        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        if(a[0]>2)
        {
            if((a[0]-2)%5==0)
                    cnt=(a[0]-2)/5;
                else
                    cnt=1+(a[0]-2)/5;
        }

        for(i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                if((a[i]-a[i-1])%5==0)
                    cnt+=(a[i]-a[i-1])/5;
                else
                    cnt+=1+(a[i]-a[i-1])/5;
            }
        }
        printf("Case %d: %d\n",Case,cnt);

    }
    return 0;
}
