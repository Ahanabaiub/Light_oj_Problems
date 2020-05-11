#include<bits/stdc++.h>
#define    fios ios_base::sync_with_stdio(false); cin.tie(0);
#define    sf(x) scanf("%d",&x)
#define    sfl(x) scanf("%lld",&x)
#define    pf(x) printf("%d\n",x)
#define    pfl(x) printf("%lld\n",x)
#define    ll long long
#define    nl "\n"
#define    PB(x) push_back(x)
#define    For(i,n) for(int i=0; i<n; i++)
#define    PI acos(-1)
#define    Max 100000
using namespace std;

 int tree[3*Max],i,n;

 int a[Max+5];


void initTree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }
    int mid=(b+e)/2;
    int left=2*node;
    int right=(2*node)+1;
    initTree(left,b,mid);
    initTree(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);
    //cout<<"node :"<<node<<" "<<tree[node]<<nl;

}

int query(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)
       return INT_MAX;

    if(b>=i && e<=j)
        return tree[node];

    int mid=(b+e)/2;
    int left=2*node;
    int right=(2*node)+1;
    int part1=query(left,b,mid,i,min(j,mid));
    int part2=query(right,mid+1,e,max(i,mid+1),j);

    return min(part1,part2);

}

/*int query(int i,int j)
{
    int res=0;

    for(i+=n,j+=n; i<j; i>>=1,j>>=1)
    {

        if(i&1)
            res+=tree[i++];

        if(j&1)
            res+=tree[--j];
    }
    return res;
}*/

int main()
{
    //for(i=0; i<500; i++)
 //tree[i]=1000;

    int t,Case;
    cin>>t;

    For(Case,t)
    {
        cout<<"Case "<<Case+1<<":"<<nl;
        int q,i,j;
        cin>>n>>q;

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        initTree(1,1,n);

        //For(i,3*n)
        //cout<<tree[i]<<" ";

        while(q--)
        {
            cin>>i>>j;

            cout<<query(1,1,n,i,j)<<nl;

        }


    }



    return 0;
}
