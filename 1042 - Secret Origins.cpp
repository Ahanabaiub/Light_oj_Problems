#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,p,i;
    cin>>T;

    for(p=1; p<=T; p++)
    {
        int x,ans,ovalue1=0,ovalue2=0;

        cin>>x;
        ans=x;

        while(x!=0)
        {
            if(x%2!=0)
                ovalue1++;

            x=x>>1;
        }

        while(ovalue1!=ovalue2)
        {
            ans++;
            x=ans;
            ovalue2=0;

            while(x!=0)
            {
                if(x%2!=0)
                    ovalue2++;

                x=x>>1;
            }
        }

        printf("Case %d: %d\n",p,ans);
    }
    return 0;
}
