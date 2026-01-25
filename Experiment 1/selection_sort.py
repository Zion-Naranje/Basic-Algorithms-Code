'''
def selection_sort(arr):
    n = len(arr)
    
    # One by one move the boundary of the unsorted part
    for i in range(n - 1):
        # Find the minimum element in unsorted part
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
                
        # Swap the found minimum element with the first element
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

# Testing the code
data = [64, 25, 12, 22, 11]
selection_sort(data)
print(data)
'''



'''INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
COPY THESE INTO A NEW FILE IF YOU WANT TO PRACTICE WRITING THE CODE.
1 Define a function named selection_sort that takes a list named arr 
2 Create a variable n and set it to the length of the list 
3 Start a for loop where i goes from 0 up to n minus 1 
4 Create a variable named min_idx and set it equal to i 
5 Start a second for loop where j goes from i plus 1 up to n 
6 Inside the second loop check if the value at arr index j is less than the value at arr index min_idx 
7 If that condition is true set min_idx equal to j 
8 Move outside the second loop but stay inside the first loop to perform the swap 
9 Swap the values at arr index i and arr index min_idx using a single line of code 
10 Create a list named data with the numbers 64 25 12 22 11 
11 Call the selection_sort function and pass the data list to it 
12 Print the data list to see the sorted result
'''



def selection_sort(arr):
    n = len(arr)
    
    # 1. Outer loop to move the boundary of the unsorted part
    for i in range(n - 1):
        
        # 2. Assume the current index i is the minimum
        
        # 3. Inner loop to scan for the actual minimum value
        for j in range(i + 1, n):
            # 4. Compare and update min_idx if needed
            
        # 5. Swap the found minimum with the element at index i
        # Tip: Python allows swapping like this: a, b = b, a

# Main part to run
data = [64, 25, 12, 22, 11]
# Call the function here

# Print the data here
