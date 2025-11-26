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

void solve()
{
    getline(cin, s);
    // cout << T << ':' << s << endl;
    stack<char> stk;
    for (auto ch : s)
    {
        if (ch == '(')
        {
            stk.push('(');
        }
        else
        {
            if (stk.empty())
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                stk.pop();
            }
        }
    }
    if (stk.empty())
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    getline(cin, s);
    while (T--)
    {
        solve();
    }
    return 0;
}