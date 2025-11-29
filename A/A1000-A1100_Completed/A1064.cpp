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
int x, y;

bool check(int n)
{
    if (n <= 1)
    {
        return true;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    for (int i = x; i <= y; i++)
    {
        int tmp = i * i + i + 41;
        if (check(tmp) == false)
        {
            cout << "Sorry" << endl;
            return;
        }
        else
        {
            continue;
        }
    }
    cout << "OK" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> x >> y;
        if (x == 0 and y == 0)
        {
            return 0;
        }
        solve();
    }
    return 0;
}