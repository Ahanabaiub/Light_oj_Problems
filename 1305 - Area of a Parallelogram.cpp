#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    ios;
    ll Case,t;
    cin>>t;

    for(Case=1; Case<=t; Case++)
    {
        ll Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        Dx=Cx+(Ax-Bx);
        Dy=Cy+(Ay-By);

        ll po=(Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay)-(Ay*Bx)-(By*Cx)-(Cy*Dx)-(Dy*Ax);
        if(po<0)
            po*=-1;

        ll area=po/2;

        printf("Case %lld: %lld %lld %lld\n",Case,Dx,Dy,area);
    }


}
