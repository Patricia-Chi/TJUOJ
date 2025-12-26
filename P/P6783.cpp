#include<bits/stdc++.h>
using namespace std;


int n,m,k;
int a[1005][1005];
int ans=0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(int i=1;i<=m-k+1;i+=k)
    {
        for(int j=1;j<=n-k+1;j+=k)
        {
            int tmp=0;
            for(int l=i;l<i+k;l++)
            {
                for(int r=j;r<j+k;r++)
                {
                    tmp+=a[l][r];
                }
            }
            ans=max(ans,tmp);
        }
    }
    cout<<ans;
    return 0;
}
