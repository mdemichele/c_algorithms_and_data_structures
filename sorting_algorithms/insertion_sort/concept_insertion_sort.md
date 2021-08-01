## Concept of Insertion Sort 
Insertion Sort is an in-place algorithm, meaning no auxiliary data structures are used. 

## Steps of Insertion Sort

Given a list of unsorted numbers:

1. Set the key to the second item in the list.  
3. Loop from arr[key] to arr[0]. Compare each item in list to the key value. If the item is greater than key, move it one to the left. If the item is smaller than the key, exit loop.
4. Once loop is exited, swap the current index value for the key value (This should place key value in correct order position).
5. Advance the key to the next item in list. Repeat steps 3-4. 
6. Once the key reaches the end of the list, you are done. 

## Time Complexity
The time complexity of insertion sort is O(n^2). 

## Advantages and Disadvantages 

## Resources
https://courses.cs.vt.edu/csonline/Algorithms/Lessons/InsertionSort/index.html
https://en.wikipedia.org/wiki/Insertion_sort