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
string s;
ll a, b;

void solve()
{
    // pow返回值为double类型，15^15会超出范围
    ll ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> a >> b;
        if (a == -1 and b == -1)
        {
            return 0;
        }
        solve();
    }
    return 0;
}