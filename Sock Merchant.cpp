#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++){
            int c=1;
            if(arr[i]==0)continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                arr[j]=0;
            }
        }

     sum=sum+(c/2);
    }

    cout<<sum<<endl;
}
