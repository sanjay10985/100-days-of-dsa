#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int> nums)
{
    for (int num : nums)
    {
        cout << num;
    }
    cout << endl;
}

void convertToArray(int value, vector<int> &nums)
{

    if (value == 0)
    {
        nums.push_back(0);
        return;
    }
    else
    {
        while (value != 0)
        {
            int digit = value % 10;
            nums.push_back(digit);
            value /= 10;
        }
    }

    reverse(nums.begin(), nums.end());
    printArray(nums);
}

int main()
{
    int n;
    vector<int> array;
    convertToArray(18, array);
    return 0;
}