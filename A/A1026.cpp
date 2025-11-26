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
char c[3];

void solve()
{
    ll od = 0, ev = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (1 & i)
        {
            od += i * i * i;
        }
        else
        {
            ev += i * i;
        }
    }
    cout << ev << ' ' << od << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}