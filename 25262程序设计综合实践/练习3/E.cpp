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

bool solve()
{
    cin >> n;
    if (n == 0)
    {
        return false;
    }
    vector<ll> a(n + 2);
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ans = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int h = st.top();
            st.pop();
            int l = 1;
            if (!st.empty())
            {
                l = st.top() + 1;
            }
            ans = max(ans, a[h] * (i - l));
        }
        st.push(i);
    }
    cout << ans << endl;
    return true;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    while (solve())
    {
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
