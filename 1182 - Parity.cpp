#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,Case;

    cin>>t;
    for(Case=1; Case<=t; Case++)
    {
        int cnt=0;
        cin>>n;
        for(int i=0; i<32; i++)
        {
            if(n&(1<<i))
                cnt++;
        }

        printf("Case %d: ",Case);

        if(cnt%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
