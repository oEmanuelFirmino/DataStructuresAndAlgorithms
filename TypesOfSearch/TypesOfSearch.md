# Search Algorithms: Linear, Binary, Exponential, and Jump

This document provides an in-depth explanation of four common search algorithms: **Linear Search**, **Binary Search**, **Exponential Search**, and **Jump Search**. Each algorithm will be explained with pseudocode, followed by a breakdown of its operation and time complexity analysis.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Exponential Search](#exponential-search)
- [Jump Search](#jump-search)
- [Summary of Time Complexities](#summary-of-time-complexities)

## Linear Search

### Explanation

Linear Search is the simplest search algorithm. It works by checking each element in the array sequentially until the desired element is found or the end of the array is reached. It does not require any specific order of the elements.

### Pseudocode

for each element in the array: if the element matches the target: return the index return -1 // If element is not found

sql
Copiar
Editar

### Example

Consider an array of numbers: `[10, 20, 30, 40, 50]`, and we are searching for the number `40`.

1. Start at the first element `10`. It does not match `40`, so move to the next.
2. Move to `20`. It does not match `40`, so move to the next.
3. Move to `30`. It does not match `40`, so move to the next.
4. Move to `40`. It matches the target, so return the index `3`.

### Time Complexity

- **Best Case**: O(1) (if the element is found at the first position)
- **Average Case**: O(n) (if the element is somewhere in the middle)
- **Worst Case**: O(n) (if the element is the last element or not in the array)

Linear search is best suited for small or unsorted datasets, but it becomes inefficient with larger datasets.

---

## Binary Search

### Explanation

Binary Search is a much more efficient algorithm but requires that the array be **sorted**. The basic idea is to repeatedly divide the array in half to narrow down the search interval. The algorithm compares the target with the middle element of the array, and depending on the result, either narrows the search to the left half or the right half.

### Pseudocode

low = 0 high = length of array - 1

while low <= high: mid = (low + high) / 2 if array[mid] == target: return mid else if array[mid] < target: low = mid + 1 else: high = mid - 1 return -1 // If target is not found

sql
Copiar
Editar

### Example

Consider an array of numbers: `[10, 20, 30, 40, 50]`, and we are searching for the number `40`.

1. The array is already sorted. Start with `low = 0`, `high = 4`, and `mid = (0 + 4) / 2 = 2`. The element at index `2` is `30`, which is less than `40`, so move to the right half.
2. Now `low = 3` and `high = 4`, so `mid = (3 + 4) / 2 = 3`. The element at index `3` is `40`, which matches the target, so return `3`.

### Time Complexity

- **Best Case**: O(1) (if the target is at the middle)
- **Average Case**: O(log n) (since the array is halved with each comparison)
- **Worst Case**: O(log n) (since the array is halved with each comparison)

Binary search is highly efficient for large datasets, but it requires sorted data and has limitations when dealing with unsorted or dynamic data.

---

## Exponential Search

### Explanation

Exponential Search is an extension of binary search that works well when the size of the array is large and the data is unbounded or not known in advance. It first finds a range in which the element may be present by doubling the search bounds, and then applies binary search within that range.

### Pseudocode

if array[0] == target: return 0 i = 1 while i < length of array and array[i] < target: i = i * 2 return binarySearch(array, i/2, min(i, n-1), target)

sql
Copiar
Editar

### Example

Consider an array of numbers: `[10, 20, 30, 40, 50]`, and we are searching for the number `40`.

1. Initially, start with `i = 1`. Since `array[1] = 20` and `20 < 40`, we double the index: `i = 2`.
2. Continue doubling: `i = 4`. Now, `array[4] = 50` which is greater than `40`. We found our range: between `array[2]` and `array[4]`.
3. Now apply Binary Search within this range to find `40`.

### Time Complexity

- **Best Case**: O(1) (if the element is at the first position)
- **Average Case**: O(log n)
- **Worst Case**: O(log n)

Exponential Search is very effective in situations where the array size is large and we are unsure about the bounds of the data.

---

## Jump Search

### Explanation

Jump Search works by jumping ahead a fixed number of steps (usually the square root of the array length) and then performing a linear search within the block where the target might be.

### Pseudocode

step = sqrt(length of array) prev = 0

while array[min(step, n)-1] < target: prev = step step += step if prev >= n: return -1

for i = prev to min(step, n): if array[i] == target: return i return -1

markdown
Copiar
Editar

### Example

Consider an array of numbers: `[10, 20, 30, 40, 50]`, and we are searching for the number `40`.

1. The square root of the length of the array is `sqrt(5) = 2`. Start by checking index `2` (i.e., `array[2] = 30`).
2. Since `30 < 40`, jump ahead by 2 positions to index `4` (i.e., `array[4] = 50`).
3. Now that we've passed the target, perform a linear search from index `2` to `4`. At index `3`, `array[3] = 40`, so return `3`.

### Time Complexity

- **Best Case**: O(√n)
- **Average Case**: O(√n)
- **Worst Case**: O(√n)

Jump Search is useful for sorted arrays when you want a balance between linear and binary search.

---

## Summary of Time Complexities

| Algorithm           | Best Case | Average Case | Worst Case |
|---------------------|-----------|--------------|------------|
| **Linear Search**    | O(1)      | O(n)         | O(n)       |
| **Binary Search**    | O(1)      | O(log n)     | O(log n)   |
| **Exponential Search**| O(1)     | O(log n)     | O(log n)   |
| **Jump Search**      | O(√n)     | O(√n)        | O(√n)      |

---

### Conclusion

- **Linear Search** is simple but inefficient for large datasets.
- **Binary Search** is fast but requires the data to be sorted.
- **Exponential Search** is effective for large and unbounded datasets.
- **Jump Search** offers a middle ground, combining linear and binary search techniques.

Each search algorithm has its strengths and weaknesses, and selecting the right one depends on the dataset and the problem at hand.