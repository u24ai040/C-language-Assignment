/*A program  to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.*/

#include <stdio.h>

int main() {
    int arr[] = {15, 18, 2, 3, 6, 12}; // Example sorted and rotated array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int low = 0, big = n - 1;

    // Binary search to find the pivot
    while (low <= big) {
        int mid = low+ (big - low) / 2;

        // Check if mid is the pivot
        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            printf("Pivot element is %d\n", arr[mid]);
            return 0;
        }

        // If the left part is sorted, the pivot must be in the right part
        if (arr[low] <= arr[mid]) {
            big = mid + 1;
        }
        // Otherwise, the pivot is in the left part
        else {
           big = mid - 1;
        }
    }

    // If no pivot element is found, the array is not rotated, or there's no pivot
    printf("No pivot element found (array might not be rotated).\n");
    return 0;
}