#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1;
    int x2,v2;

    cin>>x1>>v1;
    cin>>x2>>v2;

    if(x1==x2 && v1==v1)
        cout<<"YES"<<endl;
    else if(x1>x2 && v1<v2 || x1<x2 && v1>v2)
    {
        int r=abs(x2-x1);
        int r1=abs(v2-v1);

        if(r%r1==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    else
        cout<<"NO"<<endl;


}
