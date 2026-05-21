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
const double eps = 1e-8;
int T;
int n, m, k;
ll ans;
string s;

struct Point
{
    double x, y;
};

struct Seg
{
    Point a, b;
};

double cross(Point a, Point b)
{
    return a.x * b.y - a.y * b.x;
}

Point operator - (Point a, Point b)
{
    return {a.x - b.x, a.y - b.y};
}

bool check(Point u, Point v, vector<Seg> &a)
{
    if (fabs(u.x - v.x) < eps && fabs(u.y - v.y) < eps)
    {
        return false;
    }
    for (int i = 1; i <= n; i++)
    {
        double c1 = cross(u - a[i].a, v - a[i].a);
        double c2 = cross(u - a[i].b, v - a[i].b);
        if (c1 * c2 > eps)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    cin >> n;
    vector<Seg> a(n + 1);
    vector<Point> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].a.x >> a[i].a.y >> a[i].b.x >> a[i].b.y;
        p.push_back(a[i].a);
        p.push_back(a[i].b);
    }

    if (n == 1)
    {
        cout << "Yes!" << endl;
        return;
    }

    for (int i = 0; i < p.size(); i++)
    {
        for (int j = i + 1; j < p.size(); j++)
        {
            if (check(p[i], p[j], a))
            {
                cout << "Yes!" << endl;
                return;
            }
        }
    }
    cout << "No!" << endl;
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
