#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int l=str.size();
    int a=(str[0]-'0');
    int b=(str[1]-'0');

    if(str[l-2]=='P')
    {
        if(a==1 && b==2){
            for(int i=0; i<l-2; i++)
            cout<<str[i];
        cout<<endl;
        }

        else {
            cout<<a+1<<b+2;

        for(int i=2; i<l-2; i++)
            cout<<str[i];
        }
        cout<<endl;
    }
    else if(a==1 && b==2)
    {
        cout<<"00";

        for(int i=2; i<l-2; i++)
            cout<<str[i];
        cout<<endl;
    }
    else {
        for(int i=0; i<l-2; i++)
            cout<<str[i];
        cout<<endl;
    }
}
