#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case,i;

    scanf("%d",&T);
    for(Case=1; Case<=T; Case++)
    {
        int x1,x2,x3,n,Max=0,Min=1000001,Maxi,Mini,vol;
        scanf("%d",&n);

        string s[n];

        for(i=0; i<n; i++)
        {
            cin>>s[i];
            cin>>x1>>x2>>x3;
            vol=x1*x2*x3;

            if(vol>Max)
            {
                Max=vol;
                Maxi=i;
            }

            if(vol<Min)
            {
                Min=vol;
                Mini=i;
            }

        }

        if(Max==Min)
            printf("Case %d: no thief\n",Case);
        else
            cout<<"Case "<<Case<<": "<<s[Maxi]<<" took chocolate from "<<s[Mini]<<"\n";

    }
    return 0;
}
