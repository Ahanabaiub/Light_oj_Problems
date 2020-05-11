#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);
    for(Case=1; Case<=T; Case++)
    {
        int m,l,sec;

        scanf("%d %d",&m,&l);
       if(m==0)
        sec=0;
       else if(m>l)
            sec=(((m-l)+m)*4)+19;
        else if(m<=l)
            sec=(l*4)+19;

       printf("Case %d: %d\n",Case,sec);
    }
    return 0;
}
