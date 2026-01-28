/*
#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// The Partition function: places the pivot in the correct spot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1);    // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// The main Recursive function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int data[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(data) / sizeof(data[0]);

    quickSort(data, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
*/

/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Include iostream and use namespace std
2 Create a helper swap function that takes two integer pointers
3 Create an int function 'partition' taking (int arr[], int low, int high)
4 Set 'pivot' to arr[high] and 'i' to low - 1
5 Start a for loop with j from low to high - 1
6 Inside, if arr[j] is less than or equal to pivot, increment i and swap arr[i] with arr[j]
7 After the loop, swap arr[i+1] with the pivot at arr[high]
8 Return i + 1 as the new partition index
9 Create a void 'quickSort' function taking (int arr[], int low, int high)
10 Add the base case: if low < high, proceed
11 Call partition to get the pivot index 'pi'
12 Recursively call quickSort for the left side (low to pi - 1)
13 Recursively call quickSort for the right side (pi + 1 to high)
14 In main, define an array, find its size, call quickSort(data, 0, n-1), and print
*/



#include <iostream>
using namespace std;

// 1. Helper function to swap values
void swap(int* a, int* b) {
    // Logic for swapping
}

// 2. The Partitioning Logic
int partition(int arr[], int low, int high) {
    // 3. Pick a pivot (e.g., arr[high])
    
    // 4. Set i as the boundary of smaller elements
    
    // 5. Loop through the array from low to high-1
    for (int j = low; j < high; j++) {
        // 6. If element <= pivot, move the boundary and swap
    }
    
    // 7. Swap pivot into its final place (i + 1)
    
    // 8. Return the final index of the pivot
    return 0; 
}

// 9. Recursive QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 10. Find the partition index
        
        // 11. Sort the left subarray
        
        // 12. Sort the right subarray
    }
}

int main() {
    int data[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(data) / sizeof(data[0]);

    // 13. Call quickSort
    
    // 14. Print the array
    
    return 0;
}