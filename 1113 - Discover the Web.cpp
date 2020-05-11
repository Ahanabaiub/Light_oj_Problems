#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,Case;
    cin>>t;
    for(Case=1; Case<=t; Case++)
    {
        printf("Case %d:\n",Case);
        stack<string>Back,Forward;

        string s,l,curr="http://www.lightoj.com/";
        while(s[0]!='Q')
        {
                cin>>s;

            if(s[0]=='V')
            {
                cin>>l;
                Back.push(curr);
                curr=l;
                cout<<curr<<"\n";
            }
            else if(s[0]=='B')
            {
                if(Back.size()==0)
                {
                    cout<<"Ignored\n";
                }
                else
                {
                    Forward.push(curr);
                    curr=Back.top();
                    cout<<curr<<"\n";
                    Back.pop();
                }
            }
            else if(s[0]=='F')
            {
                if(Forward.size()==0)
                    cout<<"Ignored\n";
                else
                {
                    Back.push(curr);
                    curr=Forward.top();
                    cout<<curr<<"\n";
                    Forward.pop();
                }
            }

        }

    }
    return 0;

}
