#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2; // Prevents potential overflow

        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenindex = binarysearch(even, 6, 18);
    cout << "Index of 18 is " << evenindex << endl;

    int oddindex = binarysearch(odd, 5, 20);
    cout << "Index of 20 is " << oddindex << endl;

    // Test with keys that exist in the arrays
    evenindex = binarysearch(even, 6, 8);
    cout << "Index of 8 in even array is " << evenindex << endl;

    oddindex = binarysearch(odd, 5, 14);
    cout << "Index of 14 in odd array is " << oddindex << endl;
}
