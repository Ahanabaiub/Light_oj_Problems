#include<stdio.h>
#include<string.h>

int main()
{
    char s1[110],s2[110];

    int t,c;
    scanf("%d\n",&t);

    for(c=1; c<=t; c++)
    {

        gets(s1);
        gets(s2);

        int sum1=0,sum2=0,i,l1,l2;
        l1=strlen(s1);
        l2=strlen(s2);

        for(i=0; i<l1; i++)
        {
            if(s1[i]!=' ')
            {
                if(s1[i]>='A' && s1[i]<='Z' )
                {
                    s1[i]=s1[i]+32;
                }

            }
        }

        for(i=0; i<l2; i++)
        {
            if(s2[i]!=' ')
            {
                if(s2[i]>='A' && s2[i]<='Z' )
                {
                    s2[i]=s2[i]+32;
                }
            }

        }

       for(i=0; i<l1; i++)
        {
            if(s1[i]!=' ')
                sum1+=s1[i];
        }

       for(i=0; i<l2; i++)
        {
            if(s2[i]!=' ')
                sum2+=s2[i];
        }



        if(sum1==sum2)
            printf("Case %d: Yes\n",c);
        else
            printf("Case %d: No\n",c);


    }


    return 0;
}
