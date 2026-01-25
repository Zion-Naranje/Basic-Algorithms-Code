/*
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // We start from the second element (index 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // The item we are currently picking up
        int j = i - 1;    // The index of the item to its left

        // Shift elements that are greater than the key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Place the key in its correct sorted position
        arr[j + 1] = key;
    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3};
    int n = sizeof(data) / sizeof(data[0]);

    insertionSort(data, n);

    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
*/



/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
COPY THESE INTO A NEW FILE IF YOU WANT TO PRACTICE WRITING THE CODE.
1 Include the iostream library and use the std namespace 
2 Create a void method named insertionSort that takes an int array arr and an int n for size 
3 Start a for loop where i begins at 1 and goes up to n 
4 Create an integer variable named key and set it to the value at arr index i 
5 Create an integer variable named j and set it to i minus 1 
6 Start a while loop that checks if j is greater than or equal to 0 
7 Inside that same while check if arr at index j is greater than the key 
8 Inside the while loop set arr at index j plus 1 to the value of arr at index j 
9 Inside the while loop subtract 1 from j 
10 Move outside the while loop and set arr at index j plus 1 to the value of key 
11 Create a main function to test your code 
12 Inside the main function create an int array named data with the numbers 9 5 1 4 3 
13 Calculate the size of the array n using the sizeof operator 
14 Call the insertionSort method and pass the data array and n to it 
15 Use a for loop to print every number in the array using cout
*/



#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // 1. Write the for loop starting from index 1
    for (int i = 1; i < n; i++) {
        
        // 2. Store the current element in 'key'
        
        // 3. Set 'j' to be the index before 'i'
        
        // 4. Create the while loop with two conditions
        while (/* j is valid */ && /* arr[j] is bigger than key */) {
            
            // 5. Shift the element at j to the right
            
            // 6. Decrement j
        }
        
        // 7. Place the key into its final spot (j + 1)
    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3};
    // Calculate n here
    
    // Call the function
    
    // Print the result
    return 0;
}