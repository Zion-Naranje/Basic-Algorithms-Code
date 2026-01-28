/*
#include <iostream>
using namespace std;

// The function that merges two sorted halves
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++) L[i] = arr[low + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    // Merge the temp arrays back into arr[low..high]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// The main Recursive function
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Sort first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

int main() {
    int data[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(data) / sizeof(data[0]);

    mergeSort(data, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
*/

/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Include the iostream library and use the std namespace
2 Create a void method 'merge' taking (int arr[], int low, int mid, int high)
3 Calculate sizes n1 (mid - low + 1) and n2 (high - mid)
4 Create temporary arrays L[n1] and R[n2]
5 Use for loops to copy data from the main array into L and R
6 Create pointers i=0, j=0, and k=low
7 Start a while loop that runs as long as i < n1 AND j < n2
8 Inside, if L[i] <= R[j], set arr[k] to L[i] and increment i
9 Else, set arr[k] to R[j] and increment j. Increment k after either choice.
10 Use two separate while loops to copy any remaining elements from L and R back to arr
11 Create a void method 'mergeSort' taking (int arr[], int low, int high)
12 Add a base case: if low is less than high, proceed
13 Calculate mid using low + (high - low) / 2
14 Recursively call mergeSort for the left half (low to mid)
15 Recursively call mergeSort for the right half (mid + 1 to high)
16 Call the merge function to combine the sorted results
17 In main, create an array, calculate its size, call mergeSort(data, 0, n-1), and print it
*/



#include <iostream>
using namespace std;

// 1. Function to merge two sorted sub-arrays
void merge(int arr[], int low, int mid, int high) {
    // 2. Define sizes of temporary arrays
    
    // 3. Create temp arrays L[] and R[]
    
    // 4. Copy data from main array to L and R
    
    // 5. Initialize pointers i, j, and k (k starts at low)
    
    // 6. While loop to compare elements and merge
    while (/* i is valid */ && /* j is valid */) {
        // If L[i] is smaller, put it in arr[k]
        // Else, put R[j] in arr[k]
    }
    
    // 7. Write while loops to catch any leftover elements in L or R
}

// 8. Recursive function to split the array
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        // 9. Calculate the mid point
        
        // 10. Recursive call for the left side
        
        // 11. Recursive call for the right side
        
        // 12. Merge the two sides together
    }
}

int main() {
    int data[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(data) / sizeof(data[0]);

    // 13. Call mergeSort with the correct boundaries (low = 0, high = n-1)
    
    // 14. Print the sorted array using a for loop
    
    return 0;
}