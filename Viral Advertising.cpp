#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=2,res=2;
    scanf("%d",&n);

    for(int i=1;i<n;i++){
            int r=res*3;
            res=(r/2);
        sum=sum+res;
    }

    printf("%d\n",sum);
}
