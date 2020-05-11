#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x);
#define sfl(x) scanf("%lld",&x);
#define pf(x); printf("%d\n",x);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    int t;
    sf(t);

    while(t--)
    {
        int n;
        sf(n);

        int a[n],i,cnt=0;

        stack<int>st;

        for(i=0; i<n; i++)
        {
            sf(a[i]);
        }
        st.push(a[n-1]);
        for(i=n-2; i>=0; i--)
        {
            if(a[i]<=st.top())
                st.push(a[i]);
            else
                cnt++;


        }
        pf(cnt);

    }

    return 0;

}
