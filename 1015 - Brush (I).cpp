#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        int n,j,ans=0,x;
        cin>>n;

        for(j=0; j<n; j++)
        {
            cin>>x;

            if(x>=0)
                ans+=x;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
