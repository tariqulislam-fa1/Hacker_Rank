#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    unsigned long long int n,c=0,d=0,i,j;

    cin>>str;
    cin>>n;

    int l=str.size();
    //cout<<l<<endl;

    for(i=0;i<l;i++){
        if(str[i]=='a')c++;
    }

    unsigned long long int res=n/l;
    unsigned long long int r=n%l;

    for(j=0;j<r;j++){
        if(str[j]=='a')d++;
    }

    unsigned long long int s=((res*c)+d);

    cout<<s<<endl;
}
