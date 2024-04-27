#include <iostream>

int binarySearch(int (&nums)[10], int num) {
    int left = 0;
    int right = sizeof(nums) / sizeof(int) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < num) {
            left = mid;
        }
        else if (nums[mid] > num) {
            right = mid;
        }
        else {
            return mid;
        }
    }
    return -1;
}