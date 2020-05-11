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
        int ox,oy,ax,ay,bx,by;
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);

        double r,a,ang,ln;

        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        a=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));

        ang=acos(1-((a*a)/(2*r*r)));

        ln=r*ang;

        printf("Case %d: %.10lf\n",c,ln);

    }

    return 0;
}
