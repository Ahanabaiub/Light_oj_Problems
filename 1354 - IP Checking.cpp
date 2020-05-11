#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    //fios;

    int T,ca;
    scanf("%d",&T);

    for(ca=1; ca<=T; ca++)
    {
        int a,b,c,d;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;

        string s;
        cin>>s;

        bool fl=0;

        int x=7,i=0,sum=0;

        while(i<=7)
        {
            if(s[i]=='1')
                sum+=pow(2,x);
            x--;
            i++;
        }
        if(sum!=a)
        {
            printf("Case %d: No\n",ca);
            fl=1;
        }

        sum=0;i++;x=7;
        while(i<=16 && fl==0)
        {
            if(s[i]=='1')
                sum+=pow(2,x);
            x--;
            i++;
        }
        if(sum!=b && fl==0)
        {
            printf("Case %d: No\n",ca);
            fl=1;
        }

        sum=0;i++;x=7;
        while(i<=25 && fl==0)
        {
            if(s[i]=='1' && fl==0)
                sum+=pow(2,x);
            x--;
            i++;
        }
        if(sum!=c && fl==0)
        {
            printf("Case %d: No\n",ca);
            fl=1;
        }

        sum=0;i++;x=7;
        while(i<=34 && fl==0)
        {
            if(s[i]=='1')
                sum+=pow(2,x);
            x--;
            i++;
        }
        if(sum!=d && fl==0)
        {
            printf("Case %d: No\n",ca);
            fl=1;
        }

        if(fl==0)
         printf("Case %d: Yes\n",ca);

    }

    return 0;
}
