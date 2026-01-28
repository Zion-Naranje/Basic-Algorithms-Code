/*
class MergeSort {
    // The method that merges two sorted halves
    public static void merge(int[] arr, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        // Create temporary arrays
        int[] L = new int[n1];
        int[] R = new int[n2];

        // Copy data to temp arrays
        for (int i = 0; i < n1; ++i) L[i] = arr[low + i];
        for (int j = 0; j < n2; ++j) R[j] = arr[mid + 1 + j];

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

        // Copy remaining elements of L[] if any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy remaining elements of R[] if any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    // The main Recursive function
    public static void sort(int[] arr, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;

            // Sort first and second halves
            sort(arr, low, mid);
            sort(arr, mid + 1, high);

            // Merge the sorted halves
            merge(arr, low, mid, high);
        }
    }

    public static void main(String[] args) {
        int[] data = {38, 27, 43, 3, 9, 82, 10};
        sort(data, 0, data.length - 1);

        for (int i : data) {
            System.out.print(i + " ");
        }
    }
}
*/

/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Create a class named MergeSort
2 Inside the class, create a static void method 'merge' taking (int[] arr, int low, int mid, int high)
3 Calculate n1 = mid - low + 1 and n2 = high - mid
4 Use the 'new' keyword to create temporary arrays L and R of sizes n1 and n2
5 Use for loops to copy elements from the original 'arr' to L and R
6 Set pointers i = 0, j = 0, and k = low
7 Use a while loop (i < n1 && j < n2) to compare L[i] and R[j] and place the smaller in arr[k]
8 Use two separate while loops to copy any leftovers from L and R
9 Create a static void method 'sort' taking (int[] arr, int low, int high)
10 If low is less than high, calculate mid and call sort() for both halves
11 Finally, call the merge() method
12 In the main method, create an array, call sort(data, 0, data.length - 1), and print the results
*/



class MergeSort {
    // 1. Method to merge two sorted portions of the array
    public static void merge(int[] arr, int low, int mid, int high) {
        // 2. Define sizes and create temp arrays L and R

        // 3. Fill L and R with data from arr

        // 4. Merge L and R back into arr starting from index 'low'
        // (Hint: Use three pointers i, j, and k)

        // 5. Catch remaining elements with while loops
    }

    // 6. Recursive sorting function
    public static void sort(int[] arr, int low, int high) {
        if (low < high) {
            // 7. Calculate mid point

            // 8. Recursive calls for left and right

            // 9. Call the merge function
        }
    }

    public static void main(String[] args) {
        int[] data = {38, 27, 43, 3, 9, 82, 10};

        // 10. Start the process
        sort(data, 0, data.length - 1);

        // 11. Print the sorted array
    }
}
