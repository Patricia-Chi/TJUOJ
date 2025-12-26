#include<bits/stdc++.h>
using namespace std;


int n;
int a[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    int tmp;
    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        a[tmp]++;
    }
    for(int i=1;i<=100;i++)
    {
        if(a[i]>0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
