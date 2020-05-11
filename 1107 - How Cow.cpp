#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case;
    cin>>T;

    for(Case=1; Case<=T; Case++)
    {
        int x1,y1,x2,y2,x,y,t;

        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        cin>>t;
        printf("Case %d:\n",Case);
        while(t--)
        {
            cin>>x>>y;

            if(y>=y1 && y<=y2)
            {
                if(x>=x1 && x<=x2)
                    printf("Yes\n",Case);
                else
                    printf("No\n",Case);
            }
            else
            printf("No\n",Case);
        }

    }
    return 0;
}
