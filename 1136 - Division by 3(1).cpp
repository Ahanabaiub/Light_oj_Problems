#include<bits/stdc++.h>
#define ll long long
#define Max 100000
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        ll a,b,cnt=0;
        scanf("%lld%lld",&a,&b);

        if(a%3==1)
            a++;
        else if(a%3==0)
        {
            cnt--;
            a--;
        }
        if(b%3==2)
        {
            cnt++;
            b--;
        }
        else if(b%3==0)
        {
            b=b-2;
            cnt+=2;
        }
        cnt=cnt+((b-a+1)*2/3);

        printf("Case %d: %lld\n", Case , cnt);
    }
    return 0;
}
