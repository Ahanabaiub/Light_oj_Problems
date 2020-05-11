#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,Case;

    cin>>t;

    for(Case=1; Case<=t; Case++)
    {
        printf("Case %d:\n",Case);
        int n,m,cnt=0,x,l=-1,r=-1;
        cin>>n>>m;

        int left[n],right[n];

        for(i=0; i<m; i++)
        {
            string s;

            cin>>s;
            if(s=="pushLeft")
            {
                cin>>x;
                if(cnt<n)
                {
                    printf("Pushed in left: %d\n",x);
                    left[++l]=x;
                    cnt++;
                }
                else
                    printf("The queue is full\n");

            }
            else if(s=="pushRight")
            {
                cin>>x;
                if(cnt<n)
                {
                    printf("Pushed in right: %d\n",x);
                    right[++r]=x;
                    cnt++;
                }
                else
                    printf("The queue is full\n");
            }
            else if(s=="popLeft")
            {
                if(cnt>0)
                {
                    printf("Popped from left: %d\n",left[l--]);
                    cnt--;
                }
                else
                    printf("The queue is empty\n");
            }
            else if(s=="popRight")
            {
                if(cnt>0)
                {
                    printf("Popped from right: %d\n",right[r--]);
                    cnt--;
                }
                else
                    printf("The queue is empty\n");
            }
        }


    }
    return 0;
}

