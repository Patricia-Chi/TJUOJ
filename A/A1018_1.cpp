#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
int ans;
string s;

void solve()
{
    cin >> n;
    bool f1 = 0, f2 = 0;
    if (n % 2 == 0)
    {
        f1 = 1;
    }
    if (n > 4 and n <= 12)
    {
        f2 = 1;
    }
    cout << (f1 && f2) << ' ' << (f1 || f2) << ' ' << (f1 ^ f2) << ' ' << (!f1 && !f2);
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