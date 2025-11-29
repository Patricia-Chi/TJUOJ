// PREPEND BEGIN
#include <iostream>
using namespace std;
// PREPEND END

// TEMPLATE BEGIN
void ADD(int (*pa)[10], int (*pb)[10], const int n)
{
    // Please fill this blank
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pa[i][j] += pb[i][j];
        }
    }
}
// TEMPLATE END

// APPEND BEGIN

int a[10][10], b[10][10];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    ADD(a, b, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
// APPEND END