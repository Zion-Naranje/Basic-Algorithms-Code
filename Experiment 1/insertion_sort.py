'''
def insertion_sort(arr):
    # We start from the second element (index 1)
    for i in range(1, len(arr)):
        key = arr[i] # The item we are currently picking up
        j = i - 1    # The index of the item to its left

        # Shift elements that are greater than the key to the right
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
            
        # Place the key in its correct sorted position
        arr[j + 1] = key

# Testing the code
data = [9, 5, 1, 4, 3]
insertion_sort(data)
print(data)
'''



'''INSTRUCTIONS IF YOU WANT TO WRITE THE CODE YOURSELF.
COPY THESE INTO A NEW FILE IF YOU WANT TO PRACTICE WRITING THE CODE.
1 Define a function named insertion_sort that takes a list named arr 
2 Start a for loop where i goes from 1 up to the length of arr 
3 Create a variable named key and set it to the value at arr index i 
4 Create a variable named j and set it to i minus 1 
5 Start a while loop that checks if j is greater than or equal to 0 
6 Inside that same while check if arr at index j is greater than the key 
7 Inside the while loop set arr at index j plus 1 to the value of arr at index j 
8 Inside the while loop subtract 1 from j 
9 Move outside the while loop and set arr at index j plus 1 to the value of key 
10 Create a list named data with the numbers 9 5 1 4 3 
11 Call the insertion_sort function and pass the data list to it 
12 Print the data list to see the sorted result
'''



def insertion_sort(arr):
    # 1. Write the for loop starting from index 1 to length of arr
    for i in range(1, len(arr)):
        
        # 2. Store the current element in 'key'
        
        # 3. Set 'j' to be the index before 'i'
        
        # 4. Create the while loop with two conditions
        while j >= 0 and arr[j] > key:
            
            # 5. Shift the element at j to the right
            
            # 6. Decrement j
            
        # 7. Place the key into its final spot (j + 1)
        

# Main part to run
data = [9, 5, 1, 4, 3]
# Call the function here

# Print the data here
