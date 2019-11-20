#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    int arr[t];
    int d,m;

    for(int i=0;i<t;i++)cin>>arr[i];

    cin>>d>>m;

    int r=m-1,sum=0;

    for(int j=0;j<t-r;j++){
        sum=arr[j];
        for(int k=j+1;k<j+m;k++){
            sum=sum+arr[k];
        }

        if(sum==d)c++;
    }

    cout<<c<<endl;
}
