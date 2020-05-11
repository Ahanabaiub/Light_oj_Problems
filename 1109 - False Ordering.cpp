#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int>a, pair<int, int>b)
{
        if(a.first < b.first) {
		return 1;
	}

	if(a.first > b.first) {
		return 0;
	}

	if(a.second > b.second) {
		return 1;
	}

	return 0;
}

int main()
{
    int i;
    vector<pair<int, int> >v(1001);


    for(i=1; i<=1000; i++)
    {
        v[i].second=i;
        v[i].first=0;
    }


    for(i=1; i<=1000; i++)
    {
        for(int j=i; j<=1000; j=j+i)
            v[j].first++;
    }

    sort(v.begin(), v.end(), cmp);

    int T,Case,n;
    cin>>T;

    for(Case=1; Case<=T; Case++)
    {
        cin>>n;

        cout<<"Case "<<Case<<": "<<v[n].second<<"\n";

    }

    return 0;
}
