#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x[110], y[110];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++)
        cin >> y[i];
    double s1 = 0;
    for (int i = 1; i <= n; i++) // p=1
        s1 += abs(x[i] - y[i]);
    cout << fixed << setprecision(6) << s1 << endl;
    double s2 = 0;
    for (int i = 1; i <= n; i++) // p=2
        s2 += (x[i] - y[i]) * (x[i] - y[i]);
    s2 = sqrt(s2);
    cout << fixed << setprecision(6) << s2 << endl;
    double s3 = 0;
    for (int i = 1; i <= n; i++) // p=3
        s3 += abs((x[i] - y[i]) * (x[i] - y[i]) * (x[i] - y[i]));
    s3 = pow(s3, 1.0 / 3); // 开三次方，即1/3次方
    cout << fixed << setprecision(6) << s3 << endl;
    double s4 = 0;
    for (int i = 1; i <= n; i++)
        s4 = max(s4, abs(x[i] - y[i]));
    cout << fixed << setprecision(6) << s4 << endl;
    return 0;
}
