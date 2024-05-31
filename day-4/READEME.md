# README.md Utility Library Usage Guide

This guide explains how to create and use a utility library in C++ to simplify the process of reusing functions like `print` across multiple projects.

## Creating the Utility Library

### Directory Structure

Create the following directory structure for the utility library:

ProjectName/
├── utils.h
├── utils.cpp
├── main.cpp

### Source Files

**utils.h**

```cpp
#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <iostream>

void print(const std::vector<int>& nums);

#endif // UTILS_H

utils.cpp,

#include "utils.h"

void print(const std::vector<int>& nums)
{
for (int n : nums)
{
std::cout << n << ",";
}
std::cout << std::endl; // Add a newline for better readability
}



run this code

g++ -std=c++11 main.cpp utils.cpp -o main

then run the compiled executable,

./main
```
