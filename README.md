# PPS Structures & Unions Engine

A Semester 1 Programming for Problem Solving (PPS) C application demonstrating user-defined composite data types, nested structures, arrays of structures, and memory-sharing unions.

## PPS Concepts Covered
* **User-Defined Datatypes (`struct`)**: Grouping mixed data types (integers, floats, character arrays) into a single entity.
* **Nested Structures**: Placing a structure inside another structure (`Address` inside `Student`).
* **Arrays of Structures**: Managing collections of structured database records.
* **Unions (`union`)**: Allocating shared memory equal to the largest member size to optimize memory utilization.

## How to Compile & Run
```bash
gcc main.c -o structures_unions
./structures_unions
