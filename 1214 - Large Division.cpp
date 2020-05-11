#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        string a;
        ll b,i=1,temp;

        cin>>a>>b;
        if(b<0)
            b*=-1;

            if(a[0]!='-')
                temp=a[0]-'0';
            else
            {
                temp=a[1]-'0';
                i=2;
            }

        while(i<a.length())
        {
            while(temp<b)
            {
                temp=(temp*10)+a[i]-'0';
                i++;
            }
             temp=temp-(int)(temp/b)*b;
            if(temp==0)
                    break;

        }
        if(temp==0)
            printf("Case %d: divisible\n",Case);
        else
            printf("Case %d: not divisible\n",Case);
    }
}
