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

class Point
{
private:
    int x;
    int y;

public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    void print()
    {
        cout << x << " " << y << endl;
    }

    void distance(Point other)
    {
        cout << fixed << setprecision(5) << sqrt(pow(x - other.x, 2) + pow(y - other.y, 2)) << endl;
    }

    void generate()
    {
        cout << -x << " " << -y << endl;
    }

    void check(Point center, int r)
    {
        ll dis = 1LL * (x - center.x) * (x - center.x) + 1LL * (y - center.y) * (y - center.y);
        ll rr = 1LL * r * r;
        if (dis < rr)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};

void solve(Point &p)
{
    int op;
    cin >> op;
    if (op == 1)
    {
        p.print();
    }
    else if (op == 2)
    {
        int x2, y2;
        cin >> x2 >> y2;
        Point p2(x2, y2);
        p.distance(p2);
    }
    else if (op == 3)
    {
        p.generate();
    }
    else if (op == 4)
    {
        int x2, y2, r;
        cin >> x2 >> y2 >> r;
        Point center(x2, y2);
        p.check(center, r);
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int x, y;
    if (cin >> x >> y)
    {
        Point p(x, y);
        cin >> T;
        while (T--)
        {
            solve(p);
        }
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}