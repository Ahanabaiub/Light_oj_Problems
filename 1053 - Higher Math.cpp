#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case,i;
    cin>>T;

    for(Case=1; Case<=T; Case++)
    {
        int a[3];

        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        long long left=(pow(a[0],2)+pow(a[1],2)),right=a[2]*a[2];


        if(left==right)
            printf("Case %d: yes\n",Case);
        else
            printf("Case %d: no\n",Case);
    }
    return 0;
}
