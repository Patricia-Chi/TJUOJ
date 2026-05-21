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
constexpr int base = 100000000;
int T;
int n, m, k;
ll ans;
string s;

struct Big
{
    vi a;

    Big(ll x = 0)
    {
        if (x == 0)
        {
            a.push_back(0);
        }
        while (x)
        {
            a.push_back(x % base);
            x /= base;
        }
    }
};

bool operator < (const Big &x, const Big &y)
{
    if (x.a.size() != y.a.size())
    {
        return x.a.size() < y.a.size();
    }
    for (int i = x.a.size() - 1; i >= 0; i--)
    {
        if (x.a[i] != y.a[i])
        {
            return x.a[i] < y.a[i];
        }
    }
    return false;
}

Big operator + (const Big &x, const Big &y)
{
    Big z;
    z.a.clear();
    int t = 0;
    int n = max(x.a.size(), y.a.size());
    for (int i = 0; i < n || t; i++)
    {
        if (i < x.a.size())
        {
            t += x.a[i];
        }
        if (i < y.a.size())
        {
            t += y.a[i];
        }
        z.a.push_back(t % base);
        t /= base;
    }
    while (z.a.size() > 1 && z.a.back() == 0)
    {
        z.a.pop_back();
    }
    return z;
}

Big operator - (const Big &x, const Big &y)
{
    Big z;
    z.a.clear();
    int t = 0;
    for (int i = 0; i < x.a.size(); i++)
    {
        int v = x.a[i] - t;
        if (i < y.a.size())
        {
            v -= y.a[i];
        }
        if (v < 0)
        {
            v += base;
            t = 1;
        }
        else
        {
            t = 0;
        }
        z.a.push_back(v);
    }
    while (z.a.size() > 1 && z.a.back() == 0)
    {
        z.a.pop_back();
    }
    return z;
}

Big operator * (const Big &x, ll y)
{
    Big z;
    z.a.clear();
    ll t = 0;
    for (int i = 0; i < x.a.size() || t; i++)
    {
        if (i < x.a.size())
        {
            t += 1LL * x.a[i] * y;
        }
        z.a.push_back(t % base);
        t /= base;
    }
    while (z.a.size() > 1 && z.a.back() == 0)
    {
        z.a.pop_back();
    }
    return z;
}

ostream &operator << (ostream &out, const Big &x)
{
    out << x.a.back();
    for (int i = x.a.size() - 2; i >= 0; i--)
    {
        out << setw(8) << setfill('0') << x.a[i];
    }
    return out;
}

Big qpow(ll a, int b)
{
    Big res(1);
    for (int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    return res;
}

void solve()
{
    ll M;
    cin >> n >> M;
    vector<ll> p;
    ll x = M;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            p.push_back(i);
            while (x % i == 0)
            {
                x /= i;
            }
        }
    }
    if (x > 1)
    {
        p.push_back(x);
    }

    Big res(0);
    int sz = p.size();
    for (int mask = 0; mask < (1 << sz); mask++)
    {
        ll d = 1;
        int bits = 0;
        for (int i = 0; i < sz; i++)
        {
            if (mask >> i & 1)
            {
                d *= p[i];
                bits++;
            }
        }
        Big t = qpow(M / d, n);
        if (bits % 2 == 0)
        {
            res = res + t;
        }
        else
        {
            res = res - t;
        }
    }
    cout << res << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
