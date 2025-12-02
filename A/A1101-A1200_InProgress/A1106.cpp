// PREPEND BEGIN
#include <iostream>
using namespace std;
// PREPEND END

// TEMPLATE BEGIN
char *str_reverse(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;

    char *res = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        res[i] = str[len - 1 - i];
    }
    res[len] = '\0';
    return res;
}
// TEMPLATE END

// APPEND BEGIN
int main()
{
    char str[100];
    cin >> str;
    cout << str_reverse(str) << endl;
    return 0;
}
// APPEND END