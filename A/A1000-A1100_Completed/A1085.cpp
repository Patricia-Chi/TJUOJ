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
string t;

bool check(int a)
{
    for (int i = 0; i < t.size(); a++, i++)
    {
        if (s[a] != t[i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    getline(cin, s);
    getline(cin, t);
    s = s + s;
    for (int i = 0; i <= s.size() - t.size(); i++)
    {
        if (check(i))
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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