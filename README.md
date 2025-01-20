# Algorithms and Data Structures

This repository contains implementations of various fundamental **algorithms** and **data structures**, showcasing their functionality and efficiency. The goal of this repository is to provide a comprehensive learning resource to better understand key concepts in computer science.

## Table of Contents

- [Overview](#overview)
- [Search Algorithms](#search-algorithms)
  - [Linear Search](#linear-search)
  - [Binary Search](#binary-search)
  - [Exponential Search](#exponential-search)
  - [Jump Search](#jump-search)
- [Data Structures](#data-structures)
  - [Arrays](#arrays)
  - [Linked Lists](#linked-lists)
  - [Stacks](#stacks)
  - [Queues](#queues)
  - [Trees](#trees)
  - [Graphs](#graphs)
- [Complexity Analysis](#complexity-analysis)
- [Contributing](#contributing)

## Overview

This repository demonstrates the core **algorithms** and **data structures** that are foundational for solving problems in computer science. Algorithms are step-by-step procedures for solving a problem, while data structures are ways to store and organize data efficiently.

The repository includes several types of algorithms such as **searching**, **sorting**, and **graph traversal**, along with common data structures like **arrays**, **linked lists**, **stacks**, and **trees**.

## Search Algorithms

Efficient searching is a critical part of problem-solving in computer science. This repository includes implementations of several search algorithms:

### Linear Search

Linear Search is the simplest search algorithm. It checks each element in the list sequentially until it finds the target or finishes checking the entire array.

- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

### Binary Search

Binary Search is a faster algorithm for finding an element in a **sorted** array. It works by dividing the search space in half, eliminating half of the elements after each comparison.

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

### Exponential Search

Exponential Search starts by checking exponentially increasing indexes until the target is likely within the range. Once the range is found, Binary Search is used to pinpoint the exact location.

- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

### Jump Search

Jump Search is an algorithm that skips ahead by a fixed step (typically √n) and then performs a linear search within the block where the target may reside.

- **Time Complexity**: O(√n)
- **Space Complexity**: O(1)

## Data Structures

Data structures are essential for organizing data in ways that allow for efficient access and modification. This repository includes the following data structures:

### Arrays

Arrays are collections of elements stored in contiguous memory locations. They allow for constant-time access but may suffer from inefficiency when inserting or deleting elements.

- **Access Time**: O(1)
- **Insert/Delete Time**: O(n) (worst case)

### Linked Lists

Linked Lists are data structures where each element (node) points to the next. This structure allows efficient insertion and deletion of elements but suffers from slower access times.

- **Access Time**: O(n)
- **Insert/Delete Time**: O(1) (at the beginning)

### Stacks

A Stack is a data structure that operates on a **last in, first out (LIFO)** basis. Elements are added and removed from the top of the stack, making it ideal for tasks like undo operations.

- **Push/Pop Time**: O(1)
- **Peek Time**: O(1)

### Queues

A Queue operates on a **first in, first out (FIFO)** basis. It is commonly used for scheduling tasks or handling asynchronous data.

- **Enqueue/Dequeue Time**: O(1)
- **Peek Time**: O(1)

### Trees

Trees are hierarchical data structures consisting of nodes connected by edges. They are particularly useful for organizing data in a way that allows for efficient searching, insertion, and deletion.

- **Search Time**: O(log n) for balanced trees
- **Insert/Delete Time**: O(log n) for balanced trees

### Graphs

Graphs consist of nodes (vertices) connected by edges. They are useful for representing complex relationships, like social networks or web pages.

- **Traversal Time**: O(V + E), where V is the number of vertices and E is the number of edges

## Complexity Analysis

Understanding the time and space complexity of algorithms is crucial for choosing the best algorithm for a given problem. Here is a summary of the **Big O Notation** for the discussed algorithms:

| Algorithm              | Time Complexity | Space Complexity |
| ---------------------- | --------------- | ---------------- |
| **Linear Search**      | O(n)            | O(1)             |
| **Binary Search**      | O(log n)        | O(1)             |
| **Exponential Search** | O(log n)        | O(1)             |
| **Jump Search**        | O(√n)           | O(1)             |

### Big O Notation

- **O(n)**: Linear time complexity — the algorithm's runtime grows linearly with the input size.
- **O(log n)**: Logarithmic time complexity — the algorithm's runtime grows logarithmically with the input size.
- **O(√n)**: Square root time complexity — the algorithm's runtime grows with the square root of the input size.

These notations help analyze and compare algorithms to choose the most efficient one based on the problem's constraints.

## Contributing

If you'd like to contribute to this repository, feel free to open an issue or create a pull request. Please make sure to write clear comments and explain your changes.

---

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
