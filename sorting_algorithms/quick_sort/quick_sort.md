## Quick Sort Concepts
Quick Sort is a divide-and-conquer algorithm. 

# Steps 
1. Choose an element to be the pivot 
2. Partition the array based on where the pivot is located. You'll have a left partition that is less than the pivot and a right partition that is greater than the pivot. 
3. Recursively apply quick sort on left partition. 
4. Recursively apply quick sort to the right partition.

## Time Complexity
Quick sort can have a worst case time complexity of O(n^2). But if the pivot is chosen correctly, it can have an average time complexity of O(n log n).

## Space Complexity
Quick sort uses O(log n) memory.

## Resources