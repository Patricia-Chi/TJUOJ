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
int a, b, c, d;

void solve()
{
    double d1 = abs(a - c), d2 = abs(b - d);
    cout << fixed << setprecision(2) << sqrt(d1 * d1 + d2 * d2) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> a >> b >> c >> d;
        if (a == 0 and b == 0 and c == 0 and d == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}