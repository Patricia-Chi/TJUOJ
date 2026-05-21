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

string add(string a, string b)
{
    if (a.size() < b.size())
    {
        swap(a, b);
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res;
    int t = 0;
    for (int i = 0; i < a.size(); i++)
    {
        t += a[i] - '0';
        if (i < b.size())
        {
            t += b[i] - '0';
        }
        res.push_back(t % 10 + '0');
        t /= 10;
    }
    if (t)
    {
        res.push_back(t + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

void solve()
{
    cin >> n;
    if (n <= 2)
    {
        cout << 1;
        return;
    }
    string a = "1", b = "1";
    for (int i = 3; i <= n; i++)
    {
        string c = add(a, b);
        a = b;
        b = c;
    }
    cout << b;
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
