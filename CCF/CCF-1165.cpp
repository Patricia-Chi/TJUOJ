#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
string s;
ull flag1, flag2, ans = 1, c;

void solve()
{
    cin >> n >> m >> c >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        flag1 |= c;
    }
    for (int i = 0; i < m; i++)
    {
        int p, q;
        cin >> p >> q;
        if ((flag1 >> p & 1) == 0)
        {
            flag2 |= 1ULL << p;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if ((flag2 >> i & 1) == 0)
        {
            ans <<= 1;
        }
    }
    // cout << ans << endl;
    if (n == 0 and ans == 0)
    {
        cout << "18446744073709551616";
    }
    else
    {

        ans -= n;
        cout << ans;
    }
}
int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
