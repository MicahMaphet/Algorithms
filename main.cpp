#include <iostream>
#include <string>
#include "Levenstein.h"
#include "BinarySearch.h"
#include "SHA256.h"

int main() {
    // Levenstein Distance
    std::string a = "cains";
    std::string b = "rain";
    std::cout << "The levenstein distance between " << a << " and " << b << " is: " << levenstein(a, b);
    // Binary Search
    int nums[10];
    int find = 36;
    std::cout << "\nFinding " << find << " in array:\n";
    for (int i = 0; i < 10; i++) {
        nums[i] = i * i;
        std::cout << nums[i] << " ";
    }
    std::cout << "\nFound at index: " << binarySearch(nums, find);
    // SHA256
}