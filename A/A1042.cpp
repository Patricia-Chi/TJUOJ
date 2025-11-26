#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
ll ans;
// string s;
int s[14], h[14], c[14], d[14];

void pt(int a[], char t)
{
    for (int i = 1; i <= 13; i++)
    {
        if (a[i] == 0)
        {
            cout << t << ' ' << i << endl;
        }
    }
}

void solve()
{
    cin >> n;
    char ch;
    while (n--)
    {
        cin >> ch >> m;
        if (ch == 'S')
        {
            s[m] = 1;
        }
        else if (ch == 'H')
        {
            h[m] = 1;
        }
        else if (ch == 'C')
        {
            c[m] = 1;
        }
        else
        {
            d[m] = 1;
        }
    }
    pt(s, 'S');
    pt(h, 'H');
    pt(c, 'C');
    pt(d, 'D');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}