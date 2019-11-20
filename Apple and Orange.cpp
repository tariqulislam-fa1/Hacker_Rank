#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    int a,b;
    int m,n;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    int arr[m],arr1[n];
    int c=0,d=0;

    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
        int r=(arr[i]+a);

        if(r>=s && r<=t)
            c++;
    }

    for(int j=0; j<n; j++)
    {
        cin>>arr1[j];
        int r=(arr1[j]+b);

        if(r>=s && r<=t)
            d++;
    }

    cout<<c<<endl<<d<<endl;
}
