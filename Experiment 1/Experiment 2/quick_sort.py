"""
def partition(arr, low, high):
    # Choosing the last element as the pivot
    pivot = arr[high]
    i = low - 1  # Boundary for elements smaller than pivot

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            # Swap elements
            arr[i], arr[j] = arr[j], arr[i]

    # Swap the pivot into its final position
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quick_sort(arr, low, high):
    if low < high:
        # pi is the partitioning index
        pi = partition(arr, low, high)

        # Separately sort elements before and after partition
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

# Testing the code
data = [10, 7, 8, 9, 1, 5]
quick_sort(data, 0, len(data) - 1)
print(data)
"""

"""INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
1 Define a function 'partition' taking arr, low, and high
2 Set 'pivot' to the last element (arr[high])
3 Set 'i' to low - 1 (the "wall" pointer)
4 Start a for loop where j goes from low to high - 1
5 Inside, if arr[j] <= pivot, increment i and swap arr[i] with arr[j]
6 After the loop, swap arr[i+1] with the pivot at arr[high]
7 Return i + 1
8 Define 'quick_sort' taking arr, low, and high
9 Add a base case: if low < high, proceed
10 Call partition to get the pivot index 'pi'
11 Recursively call quick_sort for the left side (low to pi - 1)
12 Recursively call quick_sort for the right side (pi + 1 to high)
13 In the main section, create a list 'data'
14 Call quick_sort(data, 0, len(data) - 1)
15 Print the results
"""

# 1. The Partition function (Finding the Pivot's home)
def partition(arr, low, high):
    # 2. Pick the pivot
    
    # 3. Initialize the 'i' pointer
    
    # 4. Loop through the sub-array
    # (Hint: use range(low, high))
        # 5. If element is smaller than pivot, swap and move i
            
    # 6. Swap the pivot to the correct index (i + 1)
    
    # 7. Return the pivot index
    pass

# 8. The Recursive Quick Sort function
def quick_sort(arr, low, high):
    if low < high:
        # 9. Get the partition index
        
        # 10. Recurse left
        
        # 11. Recurse right
        pass

# 12. Test your implementation
data = [10, 7, 8, 9, 1, 5]
# Call quick_sort here

# Print(data)