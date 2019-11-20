#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,d=0;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++)cin>>arr[i];

    //int ma=*max_element(arr,arr+t);
    //int mi=*min_element(arr,arr+t);

    int a=arr[0],b=arr[0];
    for(int j=1;j<t;j++){
        if(arr[j]>a){
            a=arr[j];
            c++;
        }
        if(arr[j]<b){
            b=arr[j];
            d++;
        }
    }

    cout<<c<<" "<<d<<endl;
}
