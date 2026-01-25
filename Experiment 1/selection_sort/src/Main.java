/*
public class Sorting {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        // One by one move the boundary of the unsorted subarray
        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in unsorted array
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }

            // Swap the found minimum element with the first element
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        int[] data = {64, 25, 12, 22, 11};
        selectionSort(data);
        for (int num : data) {
            System.out.print(num + " ");
        }
    }
}
*/



/*INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
COPY THESE INTO A NEW FILE IF YOU WANT TO PRACTICE WRITING THE CODE.
1 Create a public class named Sorting
2 Create a public static void method named selectionSort that takes an int array arr
3 Create an integer variable n and set it to the length of the array
4 Start a for loop where i begins at 0 and goes up to n minus 1
5 Create an integer variable named minIdx and set it equal to i
6 Start a second for loop where j begins at i plus 1 and goes up to n
7 Inside the second loop check if the value at arr index j is less than the value at arr index minIdx
8 If that condition is true set minIdx equal to j
9 Move outside the second loop but stay inside the first loop to start the swap
10 Create a temporary integer variable temp and set it to the value at arr index minIdx
11 Set the value at arr index minIdx to the value at arr index i
12 Set the value at arr index i to the value stored in temp
13 Create a main method to test the code
14 Inside the main method create an int array named data with messy numbers
15 Call the selectionSort method and pass the data array to it
16 Use a for-each loop to print every number in the array to the console
*/



class Sorting {

    public static void selectionSort(int[] arr) {
        int n = arr.length;

        // 1. Outer loop to move the boundary of the unsorted part
        for (int i = 0; i < n - 1; i++) {

            // 2. Assume the current index i is the minimum

            // 3. Inner loop to scan the rest of the array for the real minimum
            for (int j = i + 1; j < n; j++) {
                // 4. Compare and update minIdx if a smaller value is found
            }

            // 5. Swap the smallest element found with the element at position i
            // Use a temp variable for the swap
        }
    }

    public static void main(String[] args) {
        int[] data = {64, 25, 12, 22, 11};
        // Call the method

        // Print results
    }
}