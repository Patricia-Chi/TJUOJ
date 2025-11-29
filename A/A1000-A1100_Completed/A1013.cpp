#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m;
int ans;
string s;

void solve()
{
    int a;
    cin >> a;
    if (a < 0 or a > 100)
    {
        cout << "Score is error!";
    }
    else if (a < 60)
    {
        cout << "E";
    }
    else if (a < 70)
    {
        cout << "D";
    }
    else if (a < 80)
    {
        cout << "C";
    }
    else if (a < 90)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}