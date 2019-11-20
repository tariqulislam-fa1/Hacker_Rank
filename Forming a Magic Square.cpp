#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;

    for(int i=1;i<=3;i++){
        cin>>a>>b>>c;

        sum=sum+abs(15-(a+b+c));
    }

    cout<<sum<<endl;
}
