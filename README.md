# Data Structures & Algorithms (DSA)

## Overview

A comprehensive repository containing implementations of fundamental data structures and algorithms with detailed explanations, complexity analysis, and practice problems.

## Purpose

This repository is designed for:
- **Interview Preparation:** Master DSA concepts for technical interviews
- **Learning:** Understand core CS fundamentals
- **Reference:** Quick lookup for implementations and complexities
- **Practice:** Solve problems organized by difficulty level

## Topics Covered

### Data Structures

- **Arrays & Strings**
  - Array operations, searching, sorting
  - String manipulation, pattern matching
  - Complexity: O(n) to O(n log n)

- **Linked Lists**
  - Singly, Doubly, Circular linked lists
  - Operations: insertion, deletion, reversal
  - Use cases: LRU cache, dynamic memory allocation

- **Stacks & Queues**
  - Stack operations: push, pop, peek
  - Queue variants: standard, circular, deque
  - Applications: expression evaluation, BFS

- **Trees**
  - Binary trees, BST, AVL, Red-Black
  - Traversal: in-order, pre-order, post-order, level-order
  - Operations: insertion, deletion, searching

- **Graphs**
  - Adjacency list/matrix representations
  - Traversal: DFS, BFS
  - Shortest path: Dijkstra, Bellman-Ford
  - Minimum spanning tree: Kruskal, Prim

- **Hash Tables**
  - Hash functions, collision resolution
  - Open addressing vs chaining
  - Applications: caching, indexing

- **Heaps**
  - Min-heap, Max-heap
  - Priority queues
  - Heap sort implementation

### Algorithms

- **Sorting**
  - Bubble, Selection, Insertion O(n^2)
  - Merge, Quick, Heap O(n log n)
  - Counting, Radix (linear time)

- **Searching**
  - Linear search O(n)
  - Binary search O(log n)
  - DFS, BFS

- **Dynamic Programming**
  - Fibonacci, LCS, LIS
  - Knapsack problem
  - Coin change, Matrix chain multiplication

- **Greedy Algorithms**
  - Activity selection
  - Huffman coding
  - Fractional knapsack

- **Recursion & Backtracking**
  - N-Queens problem
  - Sudoku solver
  - Permutations, Combinations

## Complexity Analysis

### Time Complexities

| Operation | Best | Average | Worst |
|-----------|------|---------|-------|
| Array Access | O(1) | O(1) | O(1) |
| Array Search | O(1) | O(n) | O(n) |
| Array Insertion | O(n) | O(n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n^2) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Binary Search | O(1) | O(log n) | O(log n) |

### Space Complexities

- Array: O(n)
- Linked List: O(n)
- Stack/Queue: O(n)
- Tree: O(n)
- Graph (adjacency list): O(V + E)

## Getting Started

### Prerequisites

- Java 11+
- Basic knowledge of OOP
- Understanding of basic algorithms

### How to Use

1. Clone the repository
```bash
git clone https://github.com/gp20461/DSA.git
cd DSA
```

2. Navigate to topic folders
```bash
ls # View all topics
cd LinkedLists # Enter specific topic
```

3. Study implementations with comments
4. Run test cases
5. Solve practice problems

## Directory Structure

```
DSA/
├── Arrays/
├── LinkedLists/
├── Stacks/
├── Queues/
├── Trees/
├── Graphs/
├── HashTables/
├── Heaps/
├── Sorting/
├── Searching/
├── DynamicProgramming/
└── Greedy/
```

## Common Interview Questions

- Reverse a linked list
- Detect cycle in linked list
- LRU Cache implementation
- Merge k sorted lists
- Longest substring without repeating
- Word ladder
- Median of two sorted arrays
- Serialize/deserialize binary tree

## Tips for DSA Mastery

1. **Understand, Don't Memorize**
   - Know why an algorithm works
   - Understand trade-offs

2. **Practice Regularly**
   - Solve 2-3 problems daily
   - Review solutions after solving

3. **Analyze Complexity**
   - Always calculate time & space complexity
   - Optimize step by step

4. **Implement Multiple Times**
   - Reinforce understanding
   - Build muscle memory

## Resources

- LeetCode: https://leetcode.com
- GeeksforGeeks: https://www.geeksforgeeks.org
- InterviewBit: https://www.interviewbit.com
- AlgoExpert: https://www.algoexpert.io

## Contributing

Contributions welcome! Add new implementations, test cases, or explanations.

## License

MIT License

## Author

Gopal Patel [@gp20461](https://github.com/gp20461)

---

⭐ Master DSA, ace your interviews!
