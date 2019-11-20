#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }

    int key;
    cin>>key;

    double res=(sum-arr[k])/2*1.0;

    if(res==key)cout<<"Bon Appetit"<<endl;
    else cout<<key-res<<endl;

}
