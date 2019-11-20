#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,c=0,d=0;
    string s;

    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];

    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')sum++;
        if(s[i]=='D')sum--;

        if(sum<0)c=1;

        if(sum==0 && c>=1){
            d++;
            c=0;
        }



    }
    cout<<d<<endl;
}
