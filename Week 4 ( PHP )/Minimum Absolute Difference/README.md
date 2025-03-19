# Minimum Absolute Difference

The absolute difference is the positive difference between two values `a` and `b`, written as `|a - b|` or `|b - a|`, and they are equal.  
For example, if `a = 3` and `b = 2`:  
```
|3 - 2| = |2 - 3| = 1
```

Given an array of integers, find the **minimum absolute difference** between any two elements in the array.

## Example

```
arr = [-2, 2, 4]
```

There are 3 pairs of numbers: `[-2, 2]`, `[-2, 4]`, and `[2, 4]`.  
The absolute differences for these pairs are:

```
|(-2) - 2| = 4
|(-2) - 4| = 6
|2 - 4| = 2
```

The **minimum absolute difference** is `2`.

## Function Description

Complete the `minimumAbsoluteDifference` function.

### Parameters

- `int arr[n]`: an array of integers.

### Returns

- `int`: the minimum absolute difference found.

## Input Format

- The first line contains a single integer `n`, the size of `arr`.
- The second line contains `n` space-separated integers, `arr[i]`.

## Constraints

- `2 ≤ n ≤ 10^5`
- `-10^9 ≤ arr[i] ≤ 10^9`
