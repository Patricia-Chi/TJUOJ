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
string s, t;

void solve()
{
    cin >> k;
    cin.ignore();
    getline(cin, s);
    getline(cin, t);
    s = s.substr(0, k);
    s += t;
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    // ios::sync_with_stdio(false);关了会wa
    // cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}