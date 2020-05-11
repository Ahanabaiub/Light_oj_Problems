#include<bits/stdc++.h>
#define Max 10000000
#define ll long long
using namespace std;

int main()
{
   int T,Case,i,a,b;
   int A[1000000],sum=1,temp;
   int cnt[100000];
   memset(cnt,0,sizeof(cnt));
   cin>>T;

    sum=1;

       A[0]=0;
       A[1]=1;
       //cin>>b;

       for(i=2; i<100000; i++)
       {
           temp=i;
           while(temp!=0)
           {
               if(temp>=10)
               {
                   sum+=temp-(temp/10)*10;
               }
               else
                 sum+=temp;

            temp/=10;
           }
           A[i]=sum;
           //cout<<sum<<endl;

           if(sum%3==0)
            cnt[i]=1;
       }

   for(Case=1; Case<=T; Case++)
   {

       cin>>a>>b;
       int ans=0;

       for(i=a; i<=b; i++)
        {
            if(cnt[i]==1)
                ans++;
        }
        printf("Case %d: %d\n",Case,ans);


   }
    //for(i=1;  i<b; i++)
        //cout<<A[100000-1]<<" ";

        return 0;
}
