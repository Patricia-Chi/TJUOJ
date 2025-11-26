#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

int T;
int n, m;
string s;
// const double PI = 3.14159265358979;
const long double PI = acos(-1);

void solve()
{
    long double a;
    cin >> a;
    cout << fixed << setprecision(6) << a * a * PI << " " << 2 * a * PI;
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