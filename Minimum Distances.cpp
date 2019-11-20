#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    vector<int>v;

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(int i=1; i<n; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]==arr[j])
            {
                int r=i-j;
                v.push_back(r);
            }
        }
    }

    int l=v.size();

    if(l==0)
        printf("-1");
    else
    {
        int mi=*min_element(v.begin(),v.end());
        printf("%d\n",mi);
    }
}
