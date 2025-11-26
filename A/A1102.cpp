// PREPEND BEGIN
#include <iostream>
using namespace std;
// PREPEND END

// TEMPLATE BEGIN
char *search(char *str, char c)
{
    // Please fill this blank
    while (*str != '\0')
    {
        if (*str == c or *str + 32 == c or *str - 32 == c) // 不严谨，题目里说只有字母所以这样写
        {
            return str;
        }
        str++;
    }
    return NULL;
}
// TEMPLATE END

// APPEND BEGIN
int main()
{
    char str[101], c;
    cin >> str >> c;
    if (search(str, c) != NULL)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
// APPEND END