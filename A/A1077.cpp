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
    n = s.length();
    if (s[0] >= 'a' and s[0] <= 'z')
    {
        s[0] = s[0] - 'a' + 'A';
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == ' ' and s[i] >= 'a' and s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        solve();
    }
    return 0;
}