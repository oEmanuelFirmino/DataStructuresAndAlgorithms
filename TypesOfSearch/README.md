# Search Algorithms Implementation

This project implements and compares four different search algorithms in C: Linear Search, Binary Search, Exponential Search, and Jump Search. The implementation includes performance metrics such as execution time and number of operations performed.

## Features

- Implementation of four search algorithms:
  - Linear Search
  - Binary Search
  - Exponential Search
  - Jump Search
- Performance metrics for each algorithm:
  - Execution time measurement
  - Operation count (number of comparisons)
- Dynamic memory allocation for arrays
- Support for large datasets
- Performance comparison capabilities

## Requirements

- C compiler (GCC recommended)
- Standard C libraries:
  - stdio.h
  - stdlib.h
  - time.h
  - math.h

## Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/search-algorithms.git
```

2. Compile the program:
```bash
gcc search_algorithms.c -o search_algorithms -lm
```

The `-lm` flag is required for the math library used in the Jump Search implementation.

## Usage

1. Run the compiled program:
```bash
./search_algorithms
```

2. Follow the prompts:
   - Enter the size of the array
   - Enter the number to search for

3. The program will display the results for each search algorithm, including:
   - Whether the number was found
   - Position(s) where the number was found
   - Execution time
   - Number of operations performed

## Implementation Details

### Linear Search
- Searches for all occurrences of the target value
- Returns an array of positions where the value was found
- Counts the number of comparisons performed
- Time Complexity: O(n)

### Binary Search
- Requires a sorted array
- Returns the first occurrence of the target value
- Counts the number of comparisons performed
- Time Complexity: O(log n)

### Exponential Search
- Combines exponential growth with binary search
- Works well with unbounded arrays
- Counts the number of comparisons performed
- Time Complexity: O(log n)

### Jump Search
- Uses square root step size
- Combines jumping with linear search
- Counts the number of comparisons performed
- Time Complexity: O(√n)

## Functions

### Array Management
```c
long *fillArray(long size)
```
- Creates and fills an array with sequential numbers
- Returns a dynamically allocated array

### Search Functions
```c
long binarySearch(long size, long *array, long target, long *operations)
long *linearSearch(long size, long *array, long target, long *foundCount, long *operations)
long exponentialSearch(long *array, long size, long target, long *operations)
long jumpSearch(long *array, long size, long target, long *operations)
```
- Each function returns the position(s) where the target was found
- Operations parameter tracks the number of comparisons
- Returns -1 or NULL if the target is not found

## Performance Analysis

The program provides detailed performance metrics for each algorithm:
- Execution time in seconds
- Number of comparison operations performed
- Position(s) where the target was found

This allows for practical comparison of algorithm efficiency based on:
- Dataset size
- Target value location
- Algorithm characteristics

## Memory Management

The program implements proper memory management:
- Dynamic allocation for arrays
- Memory deallocation after use
- Reallocation for resizing when needed

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.