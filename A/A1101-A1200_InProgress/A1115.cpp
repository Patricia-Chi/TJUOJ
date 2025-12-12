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

class Circle
{
private:
    int x;
    int y;
    int r;

public:
    Circle(int _x = 0, int _y = 0, int _r = 0) : x(_x), y(_y), r(_r) {}

    void print()
    {
        cout << x << " " << y << endl;
    }

    void space()
    {
        cout << fixed << setprecision(5) << PI * pow(r, 2) << endl;
    }

    void circle()
    {
        cout << fixed << setprecision(5) << 2 * PI * r << endl;
    }

    void check(Circle c2)
    {
        ll dis = 1LL * (x - c2.x) * (x - c2.x) + 1LL * (y - c2.y) * (y - c2.y);
        ll rr1 = 1LL * (r + c2.r) * (r + c2.r);
        ll rr2 = 1LL * (r - c2.r) * (r - c2.r);
        if (dis == rr1 or dis == rr2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};

void solve(Circle &c)
{
    int op;
    cin >> op;
    if (op == 1)
    {
        c.print();
    }
    else if (op == 2)
    {
        c.space();
    }
    else if (op == 3)
    {
        c.circle();
    }
    else if (op == 4)
    {
        int x2, y2, r;
        cin >> x2 >> y2 >> r;
        Circle c2(x2, y2, r);
        c.check(c2);
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int x, y, r;
    if (cin >> x >> y >> r)
    {
        Circle c(x, y, r);
        cin >> T;
        while (T--)
        {
            solve(c);
        }
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}