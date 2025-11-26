#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m;
int ans;
string s;

void solve()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << a / b;
    }
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