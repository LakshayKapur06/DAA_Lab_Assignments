#include <iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] > target) {
        return BinarySearch(arr, left, mid - 1, target);
    }
    else if (arr[mid] < target) {
        return BinarySearch(arr, mid + 1, right, target);
    }
    else {
        return mid;
    }
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int location = BinarySearch(arr, 0, 9, target);
    if (location != -1)
        cout << "Element found at index: " << location;
    else
        cout << "Element not found";
    return 0;
}

// Output: Element found at index: 5
