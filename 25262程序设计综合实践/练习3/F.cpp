#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

using vi = vector<int>;
using vii = vector<vector<int>>;
using pii = pair<int, int>;

const double PI = 3.141592653589793;
const int mod = 10000;
constexpr int N = -1;
int T;
int n, m, k;
ll ans;
string s;

void solve()
{
    cin >> s;
    ll sum = 0, now = 0, cur = 0;
    int i = 0;
    while (i < s.size() && s[i] >= '0' && s[i] <= '9')
    {
        cur = cur * 10 + s[i] - '0';
        cur %= mod;
        i++;
    }
    while (i < s.size())
    {
        char op = s[i];
        i++;
        now = 0;
        while (i < s.size() && s[i] >= '0' && s[i] <= '9')
        {
            now = now * 10 + s[i] - '0';
            now %= mod;
            i++;
        }
        if (op == '*')
        {
            cur = cur * now % mod;
        }
        else
        {
            sum = (sum + cur) % mod;
            cur = now;
        }
    }
    cout << (sum + cur) % mod << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
