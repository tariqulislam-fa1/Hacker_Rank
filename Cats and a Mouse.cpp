#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,x,y,z;
    cin>>q;

    while(q--){
        cin>>x>>y>>z;

        int r=abs(z-x);
        int r1=abs(z-y);

        if(r<r1)cout<<"Cat A"<<endl;
        else if(r1<r)cout<<"Cat B"<<endl;
        else cout<<"Mouse C"<<endl;

    }
}
