#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case,i;

    scanf("%d",&T);
    for(Case=1; Case<=T; Case++)
    {
        int n,p,q,cnt=0,w=0;

        scanf("%d %d %d",&n,&p,&q);
        int a[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

            if(p>0 && w<=q)
            {
                if(w+a[i]<=q)
                {
                    cnt++;
                    p--;
                    w+=a[i];
                }
            }

        }
        printf("Case %d: %d\n",Case,cnt);
    }
    return 0;
}
