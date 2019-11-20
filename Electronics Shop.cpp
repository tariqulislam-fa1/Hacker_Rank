#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,m,sum,d=0;
    cin>>b>>n>>m;
    int arr[n],arr1[m];
    vector<int>v;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int j=0; j<m; j++)
        cin>>arr1[j];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=arr[i]+arr1[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end(),greater<int>());

        for(int k=0;k<n*m;k++){
            if(v[k]<=b){
                cout<<v[k]<<endl;
                return 0;
            }
        }
        cout<<"-1"<<endl;
}
