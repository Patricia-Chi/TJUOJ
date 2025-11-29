#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
int ans;
string s;

void solve()
{
    cin >> n;
    if ((n % 4 == 0 and n % 100 != 0) or n % 400 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
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