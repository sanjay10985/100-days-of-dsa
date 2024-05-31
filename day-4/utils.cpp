#include "utils.h"

void print(const std::vector<int> &nums)
{
    for (int n : nums)
    {
        std::cout << n << ",";
    }
    std::cout << std::endl; // Add a newline for better readability
}
