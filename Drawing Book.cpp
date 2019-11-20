#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,c,res;
    cin>>n;

    cin>>p;

    int r=n/2;

    if(p<=r){
       res=p-1;
        c=ceil(res*1.0/2*1.0);
    }
    else if(p>r){
        if(n%2!=0){
            res=(n-1)-p;
        }
        else res=n-p;

         c=ceil(res*1.0/2*1.0);
    }

    cout<<c<<endl;
}
