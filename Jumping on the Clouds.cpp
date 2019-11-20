#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,d=0,c=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<n-1; i++)
    {
        if(arr[i+2]==0){
            c++;
            i++;
        }
        else c++;
    }

    printf("%d\n",c);
}
