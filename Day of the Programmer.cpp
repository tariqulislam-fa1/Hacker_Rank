#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>=1700 && n<=1917)
    {
        if(n%4==0)
            printf("12.09.%d\n",n);
        else
            printf("13.09.%d\n",n);
    }
    else if(n==1918)
    {
        printf("26.09.%d\n",n);
    }
    else
    {
        if(n%400==0)
            printf("12.09.%d\n",n);
        else if(n%4==0 && n%100!=0)
            printf("12.09.%d\n",n);
        else
            printf("13.09.%d\n",n);
    }


}
