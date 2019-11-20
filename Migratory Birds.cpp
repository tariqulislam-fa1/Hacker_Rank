#include<bits/stdc++.h>
using namespace std;
int ar[5];
int main()
{
    int t;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]==1)ar[0]++;
        if(arr[i]==2)ar[1]++;
        if(arr[i]==3)ar[2]++;
        if(arr[i]==4)ar[3]++;
        if(arr[i]==5)ar[4]++;

    }
    //cout<<ar[3]<<endl;
    int k=0,ma=ar[0];
    for(int j=1;j<5;j++){
        if(ma<ar[j]){
            ma=ar[j];
            k=j;
        }
    }

    cout<<k+1<<endl;

}
