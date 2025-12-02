// PREPEND BEGIN
#include <iostream>
using namespace std;
// PREPEND END

// TEMPLATE BEGIN
char *cat_fun(const char *stra, const char *strb)
{
    int len1 = 0, len2 = 0;
    while (stra[len1] != '\0')
        len1++;
    while (strb[len2] != '\0')
        len2++;

    char *res = new char[len1 + len2 + 1];

    for (int i = 0; i < len1; i++)
        res[i] = stra[i];
    for (int i = 0; i < len2; i++)
        res[len1 + i] = strb[i];
    res[len1 + len2] = '\0';

    return res;
}
// TEMPLATE END

// APPEND BEGIN
int main()
{
    char stra[200], strb[200];
    cin >> stra >> strb;
    cout << cat_fun(stra, strb) << endl;
    return 0;
}
// APPEND END