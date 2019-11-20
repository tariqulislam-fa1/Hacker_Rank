#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;

        if(n<38)cout<<n<<endl;
        else if(n%5==0)cout<<n<<endl;
        else if((n+1)%5==0)cout<<n+1<<endl;
        else if((n+2)%5==0)cout<<n+2<<endl;
        else cout<<n<<endl;
    }
}
