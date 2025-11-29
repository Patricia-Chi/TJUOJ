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
int a, b, c;

void solve()
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}