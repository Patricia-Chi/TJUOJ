#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int k;
ll ans;
string s;
int n;

void solve()
{
    cin >> n;
    double m = 0;
    double sum1 = 0, sum2 = 0, sum3 = 0;
    double b;
    vector<double> a(n);
    for (auto &&c : a)
    {
        cin >> c;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a[i] = abs(a[i] - b);
        sum1 += a[i];
        sum2 += pow(a[i], 2);
        sum3 += pow(a[i], 3);
        m = max(a[i], m);
    }
    cout << fixed << setprecision(6) << sum1 << endl;
    cout << fixed << setprecision(6) << sqrt(sum2) << endl;
    cout << fixed << setprecision(6) << pow(sum3, 1.0 / 3) << endl;
    cout << fixed << setprecision(6) << double(m) << endl;
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