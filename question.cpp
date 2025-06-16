// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]

// #include <iostream>
// using namespace std;

// int countOnes(int a[], int n) {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;
        
//         if (a[mid] == 0) {
//             low = mid + 1;
//         } else {
//             if (mid == 0 || a[mid - 1] == 0) {
//                 return n - mid;
//             } else {
//                 high = mid - 1;
//             }
//         }
//     }
//     return 0; // In case there are no 1's in the array
// }
// int main() {
//     int a[] = {0, 0, 0, 0, 1, 1,1}; // Example array
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << "Count of 1's in given array is: " << countOnes(a, n) << endl;
//     return 0;
// }






// Q5: Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// #include <iostream>
// using namespace std;

// bool isPerfectSquare(int num) {
//     if (num < 0) return false; // Negative numbers cannot be perfect squares
//     int low = 0;
//     int high = num;
//     while (low <= high) {
//         long long mid = low + (high - low) / 2;
//         long long midSquared = mid * mid;
//         if (midSquared == num) return true;
//         else if (midSquared < num) low = mid + 1;
//         else high = mid - 1;
//     }
//     return false;
// }

// int main() {
//     int num;
//     cout << "Enter any number: ";
//     cin >> num;
//     if (isPerfectSquare(num)) {
//         cout << "Perfect square" << endl;
//     } else {
//         cout << "Not a perfect square" << endl;
//     }
//     return 0;
// }







// 6.  You have n coins and you want to build a staircase with these coins. The staircase consists of k rows 
// where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Input: n = 5
// Output: 2
// Example 2:
// Input: n = 8
// Output: 3

// #include <iostream>
// using namespace std;

// int arrangeCoins(int n) {
//     int low = 0, high = n;
//     while (low <= high) {
//         long long mid = low + (high - low) / 2;
//         long long coinsUsed = mid * (mid + 1) / 2;
//         if (coinsUsed == n) {
//             return mid; // Exact match
//         } else if (coinsUsed < n) {
//             low = mid + 1; // Try for more rows
//         } else {
//             high = mid - 1; // Reduce the number of rows
//         }
//     }
//     return high; // high will be the number of complete rows
// }

// int main() {
//     int n;
//     cout << "Enter the number of coins: ";
//     cin >> n;
//     int result = arrangeCoins(n);
//     cout << "The number of complete rows is: " << result << endl;
//     return 0;
// }






//Q.4.. Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated numbe
// #include <iostream>
// using namespace std;

// int findDuplicate(int nums[], int n) {
//     int low = 0, high = n - 1;
//     while (low < high) {
//         int mid = low + (high - low) / 2;
//         if (nums[mid] >= mid + 1) {
//             low = mid + 1;
//         } else {
//             high = mid;
//         }
//     }
//     return nums[low];
// }

// int main() {
//     int nums[] = {1, 2, 2, 3, 4, 5, 6}; // Example input
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int duplicate = findDuplicate(nums, n);
//     cout << "The repeated number is: " << duplicate << endl;
//     return 0;
// }





// Q1..Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does 
// not exist return -1
// #include <iostream>
// using namespace std;

// int findLastOccurrence(int arr[], int n, int x) {
//     int low = 0, high = n - 1;
//     int result = -1; // To store the index of the last occurrence of x
    
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
        
//         if (arr[mid] == x) {
//             result = mid;  // Update result to the current index
//             low = mid + 1; // Move to the right half to find a later occurrence
//         } else if (arr[mid] < x) {
//             low = mid + 1; // Move to the right half
//         } else {
//             high = mid - 1; // Move to the left half
//         }
//     }
    
//     return result; // If x is not found, result will remain -1
// }

// int main() {
//     int arr[] = {1, 2, 2, 2, 3, 4, 5}; // Example input
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 2; // Target value to find the last occurrence of
//     int lastIndex = findLastOccurrence(arr, n, x);
    
//     if (lastIndex != -1) {
//         cout << "The last occurrence of " << x << " is at index " << lastIndex << "." << endl;
//     } else {
//         cout << x << " does not exist in the array." << endl;
//     }
    
//     return 0;
// }




// ************************************************ binary search2****************************************************
// Q1: Write a program to apply binary search in array sorted in decreasing order
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == key) {
//             return mid;
//         }
//         if (arr[mid] < key) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {10, 8, 7, 5, 4, 2, 0}; // Sorted in decreasing order
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 5;

//     int result = binarySearch(arr, n, key);
//     if (result != -1) {
//         cout << "Key is present at index " << result << endl;
//     } else {
//         cout << "Key is not present" << endl;
//     }
//     return 0;
// }









// Q2: You have a sorted array of infinite numbers, how would you search an element in the array?
#include <iostream>
#include <limits.h> // For INT_MAX
using namespace std;

// Function to perform binary search within the given bounds
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Function to find the range using exponential search
int findPosition(int arr[], int key) {
    if (arr[0] == key) {
        return 0;
    }

    // Start with the initial bound size of 1
    int index = 1;
    while (arr[index] < key) {
        index *= 2;
        if (arr[index] == INT_MAX) { // To simulate infinite array
            break;
        }
    }

    // Perform binary search within the determined bounds
    return binarySearch(arr, index / 2, min(index, INT_MAX - 1), key);
}

int main() {
    // Example array; in practice, this would be a "large" array simulating an infinite array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, INT_MAX}; // INT_MAX to simulate infinity
    int key = 15;

    int result = findPosition(arr, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
