#include <bits/stdc++.h>
using namespace std;

int a[100005];
int n, m;

bool check(int b)
{
    int temp = 0, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (temp + a[i] > b)
        {
            temp = a[i];
            cnt++;
        }
        else
        {
            temp += a[i];
        }
    }
    if (cnt < m) // 分的份少了，要降低tp，多分
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> n >> m;
    int tp = 0, dn = 0, mid = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tp += a[i];
        dn = max(dn, a[i]);
    }
    while (dn <= tp)
    {
        mid = (tp + dn) / 2;
        if (check(mid))
        {
            tp = mid - 1;
            ans = dn;
        }
        else
        {
            dn = mid + 1;
            ans = dn;
        }
    }
    cout << ans;
    return 0;
}