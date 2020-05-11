#include<bits/stdc++.h>
#define long long ll
#define Max 100000
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        int a,b,i,cnt=0;
        scanf("%d%d",&a,&b);

       int ans1=(b/3)*2;
       if(b%3==2)
        ans1++;
       int ans2=((a-1)/3)*2;
       if(a%3==2)
        ans2++;

        printf("Case %d: %d\n",Case,ans1-ans2);
    }
    return 0;
}

