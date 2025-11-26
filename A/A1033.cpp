#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int m, k;
ll ans;
string s;
double n;

void solve()
{
    double sum1 = 0, sum2 = 0;
    vector<double> a(n);
    for (auto &&b : a)
    {
        cin >> b;
        sum1 += b;
        sum2 += b * b / n;
    }
    sum1 /= double(n);
    cout << fixed << setprecision(6) << sqrt(sum2 - sum1 * sum1) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T)
    {
        cin >> n;
        if (!n)
        {
            return 0;
        }
        solve();
    }
    return 0;
}