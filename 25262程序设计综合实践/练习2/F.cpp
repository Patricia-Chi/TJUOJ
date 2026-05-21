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
const int mod = 998244353;
constexpr int N = -1;
int T;
int n, m, k;
ll ans;
string s;

void solve()
{
    cin >> s >> k;
    n = s.size();
    s = ' ' + s;
    vi cnt(26);
    ans = 0;
    for (int l = 1, r = 1; r <= n; r++)
    {
        cnt[s[r] - 'a']++;
        while (cnt[s[r] - 'a'] > k)
        {
            cnt[s[l] - 'a']--;
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    // T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
