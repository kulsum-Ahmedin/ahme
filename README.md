# Largest Number in Array
## Student Information
- **Name**: kulsum ahmedin
- **Student ID**: 6408/23
- **Course**: DSA
## Algorithm
1. Initialize a variable `largest` with the first element of the
array.
2. Iterate through the array starting from the second element.
3. Compare each element with `largest`.
4. If the current element is greater than `largest`, update 
`largest` with the current element.
5. After the loop ends, `largest` will contain the largest 
number in the array.
## How to Run the Code
1. Clone the repository to your local machine.
2. Open the terminal and navigate to the repository directory.
3. Compile the C++ code using:
 ```bash

                     # Search Algorithms:
          Ternary Search and Interpolation Search
Overview
This repository contains implementations and explanations for two advanced search algorithms: Ternary Search and Interpolation Search. Both are more specialized alternatives to Binary Search, designed to work efficiently on sorted data. These algorithms aim to improve search performance in specific scenarios by adjusting the way the search space is divided or by estimating the position of the target element.

Ternary Search
What is Ternary Search?
Ternary Search is a divide-and-conquer algorithm that searches for an element in a sorted array by dividing the search space into three parts instead of two. It compares the target element with two midpoints (mid1 and mid2) and progressively narrows down the search space.

How it Works:
Initial Setup: The array is divided into three sections by calculating two midpoints:

mid1 = low + (high - low) / 3

mid2 = high - (high - low) / 3

Comparison: The target element is compared to the values at mid1 and mid2:

If the target is equal to either mid1 or mid2, the index is returned.

If the target is smaller than mid1, the search continues in the left section.

If the target is greater than mid2, the search continues in the right section.

If the target lies between mid1 and mid2, the search continues in the middle section.

Repeat: The process is repeated until the target element is found or the search space is narrowed down to an empty range.

Time Complexity:
Best Case: O(log₃ n) — The time complexity is logarithmic, and since we divide the search space into three parts, it’s slightly faster than Binary Search.

Worst Case: O(log₃ n) — The complexity remains the same even in the worst case.

Average Case: O(log₃ n) — Average-case time complexity is similar.

Space Complexity:
O(1) — Ternary Search uses constant space because it only requires a few variables to track the search range and midpoints.

Use Case:
Ternary Search is best suited for sorted arrays and works well when splitting the search space into three parts could potentially speed up the search. It doesn’t outperform Binary Search significantly, but it provides an interesting alternative to explore.

Interpolation Search
What is Interpolation Search?
Interpolation Search is an advanced search algorithm that is an improvement over Binary Search. Instead of dividing the array into two equal halves, it estimates the position of the target element based on its value and the values at the boundaries of the search range.

How it Works:
Initial Setup: The search range is defined by the low and high indices. The algorithm calculates the estimated position (pos) of the target element based on the following formula:

Comparison: The target is compared to the element at position pos:

If the element at pos matches the target, the index is returned.

If the target is smaller than the element at pos, the search continues in the left section.

If the target is greater, the search continues in the right section.

Repeat: The process continues until the target is found or the search range becomes invalid.

Time Complexity:
Best Case: O(log log n) — When the array is uniformly distributed, Interpolation Search makes accurate guesses about the target’s position.

Worst Case: O(n) — If the data is not uniformly distributed, the interpolation formula may fail and lead to a linear search.

Average Case: O(log log n) — For uniformly distributed data, it operates similarly to Binary Search but with a better position estimation.

Space Complexity:
O(1) — Interpolation Search uses constant space since it only requires a few extra variables to store the search range and the calculated position.

Use Case:
Interpolation Search is ideal for sorted arrays where the elements are uniformly distributed. It performs well when the distribution of values is uniform, as the interpolation formula will give a good estimate of the target's position.

Comparison of Ternary Search and Interpolation Search
Criteria	Ternary Search	Interpolation Search
Search Method	Divides the search space into three parts.	Estimates the position based on values at the boundaries.
Time Complexity	O(log₃ n), which simplifies to O(log n).	Best case: O(log log n) for uniform data. Worst case: O(n) for non-uniform data.
Space Complexity	O(1)	O(1)
Best Use Case	Sorted arrays, where dividing into three parts may help.	Sorted arrays with uniformly distributed elements.
Performance	Works well, but not significantly faster than Binary Search.	Efficient for uniformly distributed data, but may fail on skewed distributions.
When to Use Which Search?
Ternary Search: Use when you want to explore dividing the search space into three parts instead of two. It doesn’t outperform Binary Search by a large margin but can be useful in specific scenarios or for learning purposes.

Interpolation Search: Best used when the array is sorted and the data is uniformly distributed. It’s faster than Binary Search in the best case when the data distribution is uniform, but may degrade to linear search if the data distribution is skewed.
Binary Search: Iterative vs Recursive
Overview
This repository demonstrates the implementation of the Binary Search algorithm using two approaches:

Iterative Approach

Recursive Approach

Both methods are used to find an element in a sorted array. The repository includes C++ code for both approaches, with time and space complexity analysis.

How It Works
Iterative Approach: Uses a loop to repeatedly divide the array in half, adjusting the search range until the target is found or the search space is empty.

Recursive Approach: Recursively divides the array by calling the function on the left or right subarray, based on the comparison with the middle element.

Time Complexity
Both Iterative and Recursive: O(log n) in all cases (best, average, and worst).

Space Complexity
Iterative Approach: O(1) (constant space).

Recursive Approach: O(log n) (due to recursion stack).

When to Use
Iterative: Ideal when memory efficiency is important.

Recursive: Use when a clean, simple recursive solution is desired, or for problems naturally suited to recursion.
Pointer Sorting Algorithm with Bubble Sort and Insertion Sort
Overview
This repository demonstrates the implementation of Pointer Sorting Algorithms using two well-known sorting techniques:

Bubble Sort

Insertion Sort

Both algorithms are implemented using pointers (or indices) to traverse and modify the array during the sorting process. The repository includes C++ code for both algorithms with time and space complexity analysis.

How It Works
Bubble Sort: Repeatedly compares adjacent elements in the array. If they are in the wrong order, the algorithm swaps them. This process continues until the entire array is sorted.

Insertion Sort: Builds a sorted portion of the array one element at a time. It picks elements from the unsorted part and inserts them into the correct position within the sorted portion.

Time and Space Complexity
1. Bubble Sort
Time Complexity:

Worst Case: O(n²) (when the array is sorted in reverse order).

Best Case: O(n) (when the array is already sorted).

Average Case: O(n²).

Space Complexity: O(1) (constant space). Bubble Sort uses only a small amount of extra memory for swapping elements.

2. Insertion Sort
Time Complexity:

Worst Case: O(n²) (when the array is sorted in reverse order).

Best Case: O(n) (when the array is already sorted).

Average Case: O(n²).

Space Complexity: O(1) (constant space). Insertion Sort works by shifting elements and does not require additional memory apart from a few variables for indexing.

When to Use Which Algorithm
Bubble Sort: Best suited for small datasets or nearly sorted data. While simple, it’s inefficient for large datasets due to its quadratic time complexity.

Insertion Sort: More efficient than Bubble Sort for small or nearly sorted datasets. It works well when the array is already partially sorted or when only a few elements are out of order.
Conclusion
The repository demonstrates two fundamental sorting algorithms: Bubble Sort and Insertion Sort. Here's a summary of each algorithm's performance:

Bubble Sort is simple but inefficient for large datasets due to its quadratic time complexity O(n²).

Insertion Sort is also O(n²) but works better than Bubble Sort in cases where the array is already partially sorted or when there are only a few elements out of order.
Finding the Smallest Element in the Array
Overview
This algorithm is designed to find the smallest element in an array. It compares each element in the array to track the smallest element encountered.

Algorithm Explanation
Steps:
Start by assuming the first element of the array is the smallest.

Iterate through the array, starting from the second element.

Compare each element with the current smallest value. If an element is smaller than the current smallest value, update the smallest value.

After checking all elements, the smallest element will be the one stored in the variable.

Return the smallest element found.

Time and Space Complexity
Time Complexity: O(n), where n is the size of the array. This is because we check each element once.

Space Complexity: O(1). Only a constant amount of space is used to track the smallest element.

Example Input and Output
Input:
Array: {64, 34, 25, 12, 22, 11, 90}

Output:
The smallest element is: 11

Conclusion
This algorithm efficiently finds the smallest element in an array with a time complexity of O(n) and a space complexity of O(1). It is simple and works for arrays of any size.
Finding the Second Largest Element in the Array
Overview
This algorithm is designed to find the second largest element in an array. It tracks the largest and the second largest values as it iterates through the array.

Algorithm Explanation
Steps:
Initialize two variables: largest and second_largest, both set to very low values (like negative infinity or the smallest value).

Iterate through the array:

If an element is larger than largest, update second_largest to be the old largest, and update largest with the current element.

If the element is not larger than largest but is larger than second_largest, update second_largest.

Once the iteration is complete, second_largest will hold the second largest element in the array.

Return the second_largest value.

Time and Space Complexity
Time Complexity: O(n), where n is the size of the array. The array is iterated through once.

Space Complexity: O(1). Only two variables (largest and second_largest) are used.

Example Input and Output
Input:
Array: {64, 34, 25, 12, 22, 11, 90}

Output:
The second largest element is: 64

Conclusion
This algorithm efficiently finds the second largest element in an array with a time complexity of O(n) and a space complexity of O(1). It is straightforward and works for arrays of any size.











