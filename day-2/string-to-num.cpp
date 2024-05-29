#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "123";
    // int num = stoi(s);
    int num = 0;
    int n = s.length();
    int point = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        num += (s[i] - '0') * point;
        point *= 10;
    }

    cout << num;
    return 0;
}