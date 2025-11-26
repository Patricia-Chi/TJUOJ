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
char c[3];

void solve()
{
    sort(c, c + 3);
    for (auto a : c)
    {
        cout << a << ' ';
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> c;
        if (!strcmp(c, "000"))
        {
            return 0; // 莫名其妙运行不起来可能是退出条件写反了……
        }
        solve();
    }
    return 0;
}