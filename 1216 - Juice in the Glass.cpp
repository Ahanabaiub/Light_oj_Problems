#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    int T,i,r1,r2,h,p;
    double res;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        cin>>r1>>r2>>h>>p;

        double r3,h3,h2,v3,v2;

        //r3=r1-((r1-r2)/h)*(h-p);

        double x=((r2*h)/(double)(r1-r2));
        r3=r2*(p+x)/(double)x;

        //printf("%.9lf %.9lf\n",x,r3);

        //h3=H-(h-p);
        //h2=H-h;

        //v3=(1/3.0)*(pi*(r3*r3)*(p+x));
        //v2=(1/3.0)*(pi*(r2*r2)*x);
        res=(double)(pi*(r3*r3*(p+x)-r2*r2*x))/3.0;

        printf("Case %d: %.9lf\n",i,res);
    }
    return 0;
}
