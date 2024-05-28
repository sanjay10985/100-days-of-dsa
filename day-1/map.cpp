#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<int, string> myMap;

    myMap.insert({1, "one"});
    myMap.emplace(2, "two");

    cout << myMap[1] << endl;
    cout << myMap[2] << endl;

    myMap.erase(2);

    cout << myMap[1] << endl;
    cout << myMap[2] << endl;

    if (myMap.find(2) != myMap.end())
    {
        cout << "Key 2 exists." << endl;
    }
    else
    {
        cout << "Key 2 does not exist." << endl;
    }

    return 0;
}