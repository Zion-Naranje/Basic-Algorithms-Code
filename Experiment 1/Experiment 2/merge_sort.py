"""
def merge_sort(arr):
    if len(arr) > 1:
        # Finding the mid of the array
        mid = len(arr) // 2

        # Dividing the array elements into 2 halves
        L = arr[:mid]
        R = arr[mid:]

        # Sorting the first half
        merge_sort(L)

        # Sorting the second half
        merge_sort(R)

        i = j = k = 0

        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        # Checking if any element was left
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

# Testing the code
data = [38, 27, 43, 3, 9, 82, 10]
merge_sort(data)
print(data)
"""

"""INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Define a function named merge_sort that takes one argument: arr
2 Add a base case check: if the length of arr is greater than 1, proceed
3 Calculate the mid point using floor division (// 2)
4 Use Python slicing to create the left half (L) from start to mid
5 Use Python slicing to create the right half (R) from mid to end
6 Recursively call merge_sort on L
7 Recursively call merge_sort on R
8 Initialize three pointers: i, j, and k all to 0
9 Start a while loop that runs while i < len(L) and j < len(R)
10 Inside, compare L[i] and R[j]; place the smaller one into arr[k]
11 Increment the respective pointer (i or j) and the main pointer k
12 Write two separate while loops to copy any remaining elements from L and R
13 Outside the function, create a list named 'data' with unsorted numbers
14 Call merge_sort(data)
15 Print the final sorted list
"""

# 1. Define the merge_sort function
def merge_sort(arr):
    # 2. Check if the list has more than one element
    if len(arr) > 1:
        
        # 3. Calculate mid and slice the list into L and R halves
        
        # 4. Recursive calls for both halves
        
        # 5. Initialize i, j, k to zero
        i = j = k = 0
        
        # 6. The main comparison loop
        while i < len(L) and j < len(R):
            # If L[i] is smaller, arr[k] = L[i]
            # Else, arr[k] = R[j]
            pass
            
        # 7. Catch the remaining elements in L or R
        # (Hint: Use two separate while loops)

# 8. Test the implementation
data = [38, 27, 43, 3, 9, 82, 10]
# Call the function here
# Print the results