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
string s[21] =
    {
        "BQQRQMRgRgMgMgRQQQBBBBBBBBBBBBBBBBBBBBBB",
        "QQMQMRMMgQMBBBBQgdsvr7rr7jL77LvsuSXPZQBB",
        "BMRgRgRMQggKLi: ...:i75XJ.  ...       .g",
        "QRgMggddq2Jsr7riYQdYri7YUPEi .::..   5BB",
        "QMMgMZJPgEgP55ZPIPdX27::iivM: i:::::PBBM",
        "RRgggDZBQK5KbQRQdbZQDB5.:ii7L ... 7BBRDQ",
        "QgMgMPjIv7PZDEZEZdEPDgBi.iiir ...sBQgDMM",
        "gRgMgg7.jggEdEbZddPddgBr iir....PBgDZggR",
        "RgMDgMZYPZEbEdEbdPddZgB..ii.   1BggEgZgg",
        "gRggZggREDdEbEbdPdbEEBP ir.   UBDZZDZggM",
        "RgMDgEgEDEDdEbEbdbZZBB:.:   .PBQZdgEgDMg",
        "gMggDDZDdDEZEDdDZggBB: .   :BB5dbDZgZggR",
        "MDgDgDgZDEZEZEDZMRBB.   ..igBPISEZDZgggg",
        "MMggZDEgZZdDEggRgQI     :PPgggZgZgEgZgDR",
        "QMgggZDEZdDZgMQRX.    .uQBQDDEDZZEDDgDQM",
        "QQMMDgZgZDZggQEi    iEQBPPPDEDdZEgDggQMQ",
        "QRQMQgMgMMBQE:   :IgQRPPDEbEgDgggDRRQQQQ",
        "QQQQQQQBBBX:  :IZBBQggDDEggMgMMQRRRQQBQB",
        "BQBQBBQK7..iPBBQBMRgMgMggDRMQMQQBQBQBQBB",
        "BBQBRXJUqBBBBBBBQQQQRQQQQQQBQBBBBBQBBBBB",
};

void solve()
{
    int x, y;
    char ch[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ch[i][j] = ' ';
        }
    }
    while (k--)
    {
        cin >> x >> y;
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 40; j++)
            {
                if (x + i >= 0 and x + i < n and y + j >= 0 and y + j < m and s[i][j] != ' ')
                {
                    ch[x + i][y + j] = s[i][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ch[i][j];
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> m >> k;
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}