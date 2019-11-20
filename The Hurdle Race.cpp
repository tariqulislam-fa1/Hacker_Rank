#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k;
    vector<int>v;

    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }

    int ma=*max_element(v.begin(),v.end());

    if(ma>k)cout<<ma-k<<endl;
    else cout<<"0"<<endl;
}
