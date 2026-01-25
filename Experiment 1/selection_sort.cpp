/*
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // Outer loop moves the boundary of the sorted part
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; // Assume the current first element is the smallest

        // Inner loop finds the actual smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Update minIdx if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = sizeof(data) / sizeof(data[0]);

    selectionSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
*/



/* INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
COPY THESE INTO A NEW FILE IF YOU WANT TO PRACTICE WRITING THE CODE.
1 Include the iostream library and use the std namespace 
2 Create a void method named selectionSort that takes an int array arr and an int n 
3 Start a for loop where i begins at 0 and goes up to n minus 1 
4 Create an integer variable named minIdx and set it equal to i 
5 Start a second for loop where j begins at i plus 1 and goes up to n 
6 Inside the second loop check if the value at arr index j is less than the value at arr index minIdx 
7 If that condition is true set minIdx equal to j 
8 Move outside the second loop but stay inside the first loop to start the swap 
9 Create a temporary integer variable temp and set it to the value at arr index minIdx 
10 Set the value at arr index minIdx to the value at arr index i 
11 Set the value at arr index i to the value stored in temp 
12 Create a main function to test the code 
13 Inside the main function create an int array named data with some messy numbers 
14 Calculate the size n and call the selectionSort method 
15 Use a for loop to print the sorted array using cout
*/



#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    // 1. Loop through the array until the second to last element
    for (int i = 0; i < n - 1; i++) {
        
        // 2. Assume the current position i has the minimum value
        
        // 3. Loop through the rest of the array to find the real minimum
        for (int j = i + 1; j < n; j++) {
            // 4. Compare arr[j] with arr[minIdx]
        }

        // 5. Swap the smallest element found with the element at position i
        // Use a temp variable for the swap
    }
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = sizeof(data) / sizeof(data[0]);

    // Call the function
    
    // Print the result
    return 0;
}