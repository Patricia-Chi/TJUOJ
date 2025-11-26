#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793; // pi的值要精确一些，不然后两个点会WA掉
int T;
int n, m;
int ans;
string s;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    double ss = a * b * sin(c * PI / 180) / 2;
    cout << fixed << setprecision(4) << ss << endl;
    cout << fixed << setprecision(4) << a + b + sqrt(a * a + b * b - 2 * a * b * cos(c * PI / 180)) << endl;
    cout << fixed << setprecision(4) << ss * 2 / a << endl;
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