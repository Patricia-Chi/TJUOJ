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

void solve()
{
    if (s.find(t) != string::npos)
    {
        ans++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    cin >> t;
    while (T)
    {
        cin >> s;
        if (s == "END_OF_TEXT")
        {
            break;
        }
        solve();
    }
    cout << ans;
    return 0;
}