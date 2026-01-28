/*
class QuickSort {
    // Helper function to swap elements
    private static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // The Partition function: places the pivot in the correct spot
    private static int partition(int[] arr, int low, int high) {
        int pivot = arr[high]; // Choosing the last element as pivot
        int i = (low - 1);    // Index of smaller element

        for (int j = low; j < high; j++) {
            // If current element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return (i + 1);
    }

    // The main Recursive function
    public static void sort(int[] arr, int low, int high) {
        if (low < high) {
            // pi is partitioning index, arr[pi] is now at right place
            int pi = partition(arr, low, high);

            // Separately sort elements before and after partition
            sort(arr, low, pi - 1);
            sort(arr, pi + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] data = {10, 7, 8, 9, 1, 5};
        sort(data, 0, data.length - 1);

        for (int i : data) {
            System.out.print(i + " ");
        }
    }
}
*/

/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Create a class named QuickSort
2 Define a private static void method 'swap' taking (int[] arr, int i, int j)
3 Define a private static int method 'partition' taking (int[] arr, int low, int high)
4 Inside partition, set pivot = arr[high] and i = low - 1
5 Run a for loop with j from low to high - 1
6 If arr[j] <= pivot, increment i and call the swap method for i and j
7 After the loop, swap arr[i + 1] with the pivot at index high
8 Return i + 1
9 Create a public static void method 'sort' taking (int[] arr, int low, int high)
10 Add the base case: if low < high, proceed
11 Call partition to get the index 'pi'
12 Recursively call sort for (low, pi - 1) and (pi + 1, high)
13 In main, initialize an int array, call sort, and print the result using a for-each loop
*/



class QuickSort {
    // 1. Helper swap method
    private static void swap(int[] arr, int i, int j) {
        // Logic to swap elements at indices i and j
    }

    // 2. The Partitioning Logic
    private static int partition(int[] arr, int low, int high) {
        // 3. Pick the pivot at arr[high]

        // 4. Set the boundary pointer i

        // 5. Loop through the array to move smaller elements to the left
        for (int j = low; j < high; j++) {
            // Use the swap method if element is <= pivot
        }

        // 6. Swap pivot into its final home

        // 7. Return the partition index
        return 0;
    }

    // 8. The Recursive Sort function
    public static void sort(int[] arr, int low, int high) {
        if (low < high) {
            // 9. Find partition index pi

            // 10. Recurse left of pi

            // 11. Recurse right of pi
        }
    }

    public static void main(String[] args) {
        int[] data = {10, 7, 8, 9, 1, 5};

        // 12. Call the sort method

        // 13. Print the final array
    }
}