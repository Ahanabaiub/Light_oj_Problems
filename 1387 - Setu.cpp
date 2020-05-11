#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    //fios;
    int T,c;
    scanf("%d",&T);

    for(c=1; c<=T; c++)
    {
        int n,sum=0;
        scanf("%d",&n);
        printf("Case %d:\n",c);
        while(n--)
        {
            int amm;

            string s1;

            cin>>s1;

            if(s1[0]=='d')
            {
                scanf("%d",&amm);
                sum+=amm;
            }
            else
            {
                printf("%d\n",sum);
            }
        }
    }
    return 0;

}
