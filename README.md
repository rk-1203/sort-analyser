# Sort Analyser
Profiling and analysis of different sorting algorithms available.

## Project contains :

1. icreate.c - creates a list of random numbers
2. bsort.c - bubble sort
3. ssort.c - selection sort
4. isort.c - insertion sort
5. qsort.c - quick sort
6. msort.c - merge sort
7. pro.h - header file for specifying function prototype of sorting algorithms
8. main.c - for running and profiling all sorting algorithms

## 🛠 Installation & Set Up

1. Install Gprof tool for profiling

   ```
   $ apt-get install binutils
   ```

2. Compile the code

   ```
   $ gcc -Wall -pg main.c bsort.c ssort.c isort.c qsort.c msort.c -o sort
   ```

3. Execute the compiled executable code(sort)

   ```
   $ ./sort
   ```

3. Use the generated gmon.out and executable(sort) to produce the profiling as the output

   ```
   gprof sort gmon.out > analysis_sort.txt
   ```

4. A file named analysis_sort.txt is generated which containes the profiling report.