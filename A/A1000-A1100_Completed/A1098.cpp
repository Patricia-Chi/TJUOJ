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

class students
{
public:
    ll id;
    string name;
    int ch;
    int ma;
    int en;
    int sum;
};

bool cmp(students a, students b)
{
    if (a.sum != b.sum)
        return a.sum > b.sum;
    else if (a.ch != b.ch)
        return a.ch > b.ch;
    else if (a.ma != b.ma)
        return a.ma > b.ma;
    else if (a.en != b.en)
        return a.en > b.en;
    else
        return a.id < b.id;
}
void solve()
{
    students stu[307];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].id >> stu[i].name >> stu[i].ch >> stu[i].ma >> stu[i].en;
        stu[i].sum = stu[i].ch + stu[i].ma + stu[i].en;
    }
    sort(stu, stu + n, cmp);

    for (int i = 0; i < 5 and i < n; i++)
    {
        cout << stu[i].id << " " << stu[i].name << " " << stu[i].sum << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}