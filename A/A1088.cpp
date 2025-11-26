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
int mn = 1e7 + 7;

void solve()
{
    cin >> s;
    int cnt = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (i != s.size() - 1 and s[i] == s[i + 1])
        {
            cnt++;
        }
        else if (cnt > 1)
        {
            cout << cnt << s[i];
            cnt = 1;
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
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