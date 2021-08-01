## Merge Sort Concepts
Merge Sort is a divide-and-conquer algorithm that utilizes recursion. Essentially, the algorithm recursively splits the unsorted list into sublists until the sublists are each one element long. Then, it merges those sublists together in order, forming larger and larger sublists until there is only one list again. At that point, the list should be sorted and back to the correct length.

## Merge Sort Steps
1. Divide the unsorted list into n sublists (each sublist should contain only one element, at which point it is considered to be sorted).
2. Repeatedly merge the sublists to produce larger sorted sublists until there is only one sublist remaining. The remaining list will be sorted. 

## Time Complexity
The running time of Merge sort is O(n log n). I will explain this in greater detail soon.

## Resources
["Merge Sort" - Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)

