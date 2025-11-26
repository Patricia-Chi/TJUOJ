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
    cin.ignore();
    cin >> s >> t;
    int hh, mm, ss;
    ss = (s[6] - '0') * 10 + s[7] - '0' + (t[6] - '0') * 10 + (t[7] - '0');
    mm = (s[3] - '0') * 10 + s[4] - '0' + (t[3] - '0') * 10 + (t[4] - '0');
    hh = (s[0] - '0') * 10 + s[1] - '0' + (t[0] - '0') * 10 + (t[1] - '0');
    if (ss >= 60)
    {
        ss -= 60;
        mm++;
    }
    if (mm >= 60)
    {
        mm -= 60;
        hh++;
    }
    cout << setw(2) << setfill('0') << hh << ':' << setw(2) << setfill('0') << mm << ':' << setw(2) << setfill('0') << ss << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}