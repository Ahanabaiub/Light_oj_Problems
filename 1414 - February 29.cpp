#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{

    int T,c;

    cin>>T;

    for(c=1; c<=T; c++)
    {
        string s1,s2;
        int d1,d2,y1,y2,ans=0;
        char ch;

        cin>>s1>>d1>>ch>>y1;

        cin>>s2>>d2>>ch>>y2;

        ans=(y2/4-y2/100+y2/400)-(y1/4-y1/100+y1/400);

        if(y1%4==0)
        {
            if(y1%100!=0 || (y1%100==0 && y1%400==0))
            {
                if(s1=="January" || s1=="February")
                    ans++;
            }
        }

        if(y2%4==0)
        {
            if(y2%100!=0 || (y2%100==0 && y2%400==0))
                {
                   if(s2=="January")
                    ans--;
                   else if(s2=="February" && d2!=29)
                    ans--;

                }

        }

        printf("Case %d: %d\n",c,ans);


    }
    return 0;

}
