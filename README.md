# Bulgarian-Olympiad-Tasks

## Overview
This is an optimized C++ solution for **Task B: Training Courses**, a competitive programming problem involving mathematical simulation and resource optimization.

The program calculates the maximum number of courses a student can complete given a specific budget, course price, and a "Buy K, Get 1 Free" promotion scheme. It implements a recursive bonus logic to account for compounding free courses.

## Problem Statement
A platform offers online courses at price **P**. For every **K** courses completed (paid or free), the student receives a voucher for **1 free course**.
Given a budget **N**, the program determines the total number of courses the student can finish.

### Constraints
* `1 ≤ P ≤ 1000`
* `2 ≤ K ≤ 1000`
* `3 ≤ N ≤ 1,000,000`
* Time Limit: Strict (Standard Olympiad limits)

## Solution Logic
The algorithm follows a **Greedy Simulation** approach with **O(log N)** complexity:
1.  **Initial Purchase:** Calculate the base number of courses affordable with budget `N`.
2.  **Bonus Recursion:**
    * Calculate how many groups of `K` courses exist in the current total.
    * Add the earned free courses to the total.
    * Add the free courses *plus* any remainder to the next iteration's pool.
    * Repeat until no new free courses can be earned.

## Technical Details
* **Language:** C++
* **Optimizations:**
    * `std::ios::sync_with_stdio(false)` and `cin.tie(NULL)` for ultra-fast I/O handling.
    * `long long` data types to prevent integer overflow for edge cases.
    * Memory efficient (O(1) space complexity).

## How to Run

1.  **Compile the code:**
    ```bash
    g++ main.cpp -o courses
    ```

2.  **Run the executable:**
    ```bash
    ./courses
    ```

3.  **Input Format:**
    * First line: `T` (Number of test cases)
    * Next lines: `P K N` (Price, Promotion Threshold, Budget)

### Example

**Input:**
```text
1
30 4 350
