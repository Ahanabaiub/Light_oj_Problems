    #include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        double ab,ac,bc,r,h,l,mid,ad;
        cin>>ab>>ac>>bc>>r;
        int q=100;
         l=0.0;
         h=ab;
        while(q--)
        {
            mid=(l+h)/2.0;

            double ae,de,s1,s2;
            ad=mid;

            ae=(ad/ab)*ac;
            de=(ad/ab)*bc;

            s1=(ab+ac+bc)/2.0;
            s2=(ad+ae+de)/2.0;

            double ar_big_triangle,ar_sm_triangle,ar_trapz;
            ar_big_triangle=sqrt(s1*(s1-ab)*(s1-ac)*(s1-bc));
            ar_sm_triangle=sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));
            ar_trapz=ar_big_triangle-ar_sm_triangle;

            double Ratio=(ar_sm_triangle/ar_trapz);

            if(Ratio<r)
                l=mid;
            else
                h=mid;
        }
        printf("Case %d: %.10lf\n",i,ad);
    }
    return 0;
}
