# Push_swap - A Sorting Algorithm

## Introduction:
The **push_swap** project is a challenging assignment that involves sorting a stack of integers using a predefined set of operations. The goal is to implement an algorithm that efficiently sorts the stack with the fewest possible moves, adhering to specific rules and constraints.

## Description:
In the push_swap project, you are given two stacks named A and B, where stack A initially contains a random assortment of negative and/or positive integers, while stack B is initially empty. The objective is to sort the integers in stack A in ascending order using a predefined set of operations. These operations are:

* **`sa`**, **`sb`**, **`ss`**: Swap elements at the top of stack A, B, or both.
* **`pa`**, **`pb`**: Push elements between stacks A and B.
* **`ra`**, **`rb`**, **`rr`**: Rotate elements in stack A, B, or both.
* **`rra`**, **`rrb`**, **`rrr`**: Reverse rotate elements in stack A, B, or both.


## Implementation:
* **Selection Sort**: For small stacks (2 to 5 elements), a custom implementation of selection sort is used along with a combination of operations to efficiently sort the stack.
* **Radix Sort**: For larger stacks, radix sort is implemented. Radix sort is a non-comparative sorting algorithm that sorts integers by processing individual digits. It offers efficiency for sorting large sets of integers.

## Usage:
1. **Compiling**: Run **`make`** to compile the project.
2. **Running**: Execute the program with a list of random numbers:

   ```./push_swap 7 2 9 -6 1 8 23```
3. The program prints a list of operations illustrating how to sort the list of numbers using the stacks.

