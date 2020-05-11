#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case;
    scanf("%d",&T);

    for(Case=1; Case<=T; Case++)
    {
        int n,m,k,i,j,temp;

        scanf("%d%d%d",&n,&m,&k);

        int a[n][k];
        string c;

        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                cin>>c;
                temp=c[1]-'0';
                if(c.length()>2)
                temp=(temp*10)+c[2]-'0';

                if(c[0]=='-')
                    a[i][j]=-temp;
                else
                    a[i][j]=temp;

            }
        }
        int p,flag=0,nflag=0,pflag=0;
        cin>>p;
        int b[p];
        for(i=0; i<p; i++)
            cin>>b[i];



        for(i=0; i<n; i++)
        {
            flag=0;
            nflag=1;
            for(j=0; j<k; j++)
            {

                for(int l=0; l<p; l++)
                {

                    if(a[i][j]<0)
                    {
                        temp=-1*a[i][j];
                        if(temp==b[l])
                        {
                            nflag=0;
                            break;
                        }
                    }
                    else
                    {
                         if(a[i][j]==b[l])
                         {
                           flag=1;
                           break;

                         }
                    }
                }

            }

            if(flag==0 && nflag==0)
                {
                    printf("Case %d: No\n",Case);
                    pflag=1;
                    break;
                }

        }

        if(pflag==0)
            printf("Case %d: Yes\n",Case);


    }
    return 0;

}
