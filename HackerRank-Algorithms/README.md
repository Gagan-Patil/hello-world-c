# HackerRank Algorithms & GitHub Coding Portfolio

## Student Information

- **Name:** GAGAN S PATIL
- **USN / Student ID:** [R25EF085]
- **Semester:** 3rd Semester
- **Language:** C++11
- **HackerRank Profile:** [ https://www.hackerrank.com/profile/gagansudhakarpa1 ]
- **GitHub Repository:** https://github.com/Gagan-Patil/hello-world-c

## Introduction

This portfolio contains solutions to five mandatory algorithmic problems covering arrays, sorting, searching, implementation, and greedy algorithms. The solutions are implemented in C++ and organized into separate folders for clarity and maintainability.

## Problems Completed

| No. | Problem | Topic | Time Complexity | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays / Implementation | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | O(N) | O(1) |
| 3 | Insertion Sort – Part 1 | Sorting | O(N) | O(1) |
| 4 | Binary Search | Searching | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | O(N log N) | O(N) |

## 1. Mini-Max Sum

### Approach
Track the minimum and maximum values while processing the five integers. The minimum sum is obtained by excluding the maximum value, while the maximum sum is obtained by excluding the minimum value.

### Complexity
- Time: O(N)
- Auxiliary Space: O(1)

## 2. Birthday Cake Candles

### Approach
Traverse the array once while maintaining the maximum candle height and the number of candles having that height.

### Complexity
- Time: O(N)
- Auxiliary Space: O(1)

## 3. Insertion Sort – Part 1

### Approach
Store the last element as the value to be inserted. Shift larger elements one position to the right until the correct position is found, then insert the value.

### Complexity
- Time: O(N) for the required insertion operation
- Auxiliary Space: O(1)

## 4. Binary Search

### Approach
Use two pointers, left and right, to repeatedly divide the sorted array into two halves. Compare the middle element with the target and continue searching in the appropriate half.

### Complexity
- Time: O(log N)
- Auxiliary Space: O(1)

### Note
This problem was implemented as a suitable sorted-array binary search because a named Binary Search challenge was not available in the HackerRank Prepare section.

## 5. Mark and Toys

### Approach
Sort the toy prices in ascending order and purchase the cheapest toys first while the total remains within the budget.

### Complexity
- Time: O(N log N)
- Auxiliary Space: O(N)

## Repository Structure

```text
HackerRank-Algorithms/
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
├── 05-Mark-and-Toys/
│   └── solution.cpp
│
└── README.md

Algorithmic Techniques Learned
Through these problems, I practiced linear traversal, minimum and maximum tracking, counting, element shifting, binary search, sorting, and greedy decision-making. I learned that choosing an appropriate algorithm can significantly reduce execution time. Linear algorithms such as O(N) are suitable when the input only needs to be scanned once. Binary search demonstrates how repeatedly dividing the search space reduces the complexity to O(log N). The Mark and Toys problem demonstrates a greedy strategy where selecting the cheapest available items first maximizes the number of purchases within a fixed budget. I also learned to analyze auxiliary space separately from total memory usage and to organize algorithm implementations into a structured GitHub portfolio. These exercises improved my understanding of algorithm efficiency, clean coding practices, and maintaining programming solutions in a version-controlled repository.
Evidence
Accepted HackerRank submissions and challenge screenshots are maintained as activity evidence.
HackerRank Badge
Badge evidence will be added here if/when the required HackerRank badge is earned.
Original Challenge Links
- Mini-Max Sum: https://www.hackerrank.com/challenges/mini-max-sum
- Birthday Cake Candles: https://www.hackerrank.com/challenges/birthday-cake-candles
- Insertion Sort – Part 1: https://www.hackerrank.com/challenges/insertionsort1
- Binary Search: Self-implemented suitable sorted-array search
- Mark and Toys: https://www.hackerrank.com/challenges/mark-and-toys

5. Press **Ctrl + S**.



