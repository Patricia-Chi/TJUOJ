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
    vi a(6);
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
    }
    ans = -1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            for (int l = j + 1; l <= 5; l++)
            {
                if ((a[i] + a[j] + a[l]) % 10 == 0)
                {
                    int sum = 0;
                    for (int p = 1; p <= 5; p++)
                    {
                        if (p != i and p != j and p != l)
                        {
                            sum += a[p];
                        }
                    }
                    int x = sum % 10;
                    if (x == 0)
                    {
                        x = 10;
                    }
                    ans = max(ans, 1LL * x);
                }
            }
        }
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
