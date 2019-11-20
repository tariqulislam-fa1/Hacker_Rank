#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    int n,m,c=0;
    int res,res1;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];

    if(n>1)
        res=lcm(a[0],a[1]);
    else
        res=a[0];
    if(m>1)
        res1=__gcd(b[0],b[1]);
    else
        res1=b[0];

    for(int j=2; j<n; j++)
    {

        res=lcm(res,a[j]);
    }

    for(int k=2; k<m; k++)
    {
        res1=__gcd(res1,b[k]);
    }

    if(res1%res==0)
    {
        for(int j=res; j<=res1; j++)
            if(j%res==0 && res1%j==0)
                c++;
    }

    cout<<c<<endl;

}
