#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

/*const double PI = 3.141592653589793;
int T;
int n, m, k;
int ans;
string s;

void solve()
{
}*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    // T = 1;
    //  cin >> T;
    int a, b;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 and b == 0)
        {
            return 0;
        }
        if (a < b)
        {
            cout << a << ' ' << b << endl;
        }
        else
        {
            cout << b << ' ' << a << endl;
        }
    }
    return 0;
}