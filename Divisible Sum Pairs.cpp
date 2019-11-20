#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,c=0;
    cin>>t>>k;
    int arr[t];

    for(int i=0;i<t;i++)cin>>arr[i];

    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
           if((arr[i]+arr[j])%k==0)c++;
        }
    }

    cout<<c<<endl;
}
