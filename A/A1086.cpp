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
int i;

void solve()
{
    cin >> s;
    if (s.find("jie") != string::npos)
    {
        mn > s.length() ? mn = s.length(), k = i : mn = mn;
    }
}

int main()
{
    freopen("jie.in", "r", stdin);
    freopen("jie.out", "w", stdout);
    // ios::sync_with_stdio(false);
    // cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        solve();
    }
    cout << k << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}