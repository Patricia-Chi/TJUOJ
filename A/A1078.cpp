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
map<char, int> mp{{'a', 1}, {'b', 2}, {'c', 3}, {'d', 1}, {'e', 2}, {'f', 3}, {'g', 1}, {'h', 2}, {'i', 3}, {'j', 1}, {'k', 2}, {'l', 3}, {'m', 1}, {'n', 2}, {'o', 3}, {'p', 1}, {'q', 2}, {'r', 3}, {'s', 4}, {'t', 1}, {'u', 2}, {'v', 3}, {'w', 1}, {'x', 2}, {'y', 3}, {'z', 4}};

void solve()
{
    getline(cin, s);
    for (auto c : s)
    {
        if (c == ' ')
        {
            ans++;
        }
        else
        {
            ans += mp[c];
        }
    }
    cout << ans << endl;
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