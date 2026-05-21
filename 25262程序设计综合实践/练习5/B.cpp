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
    int st, ed;
    cin >> st >> ed;
    vi d(100000, -1);
    queue<int> q;
    q.push(st);
    d[st] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        if (x == ed)
        {
            cout << d[x] << endl;
            return;
        }

        if (x * 2 < 100000 && d[x * 2] == -1)
        {
            d[x * 2] = d[x] + 1;
            q.push(x * 2);
        }
        if (x % 2 == 0 && d[x / 2] == -1)
        {
            d[x / 2] = d[x] + 1;
            q.push(x / 2);
        }
        if (x + 1 < 100000 && d[x + 1] == -1)
        {
            d[x + 1] = d[x] + 1;
            q.push(x + 1);
        }
    }
    cout << -1 << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
