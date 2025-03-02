# Two Arrays

There are two `n`-element arrays of integers, `A` and `B`. Permute them into some `A'` and `B'` such that the relation `A'[i] + B'[i] ≥ k` holds for all `i` where `0 ≤ i < n`.

There will be `q` queries consisting of `A`, `B`, and `k`. For each query, return `YES` if some permutation `A'`, `B'` satisfying the relation exists. Otherwise, return `NO`.

## Example

```
A = [0, 1]
B = [0, 2]
k = 1
```

A valid `A'`, `B'` is `A' = [1, 0]` and `B' = [0, 2]`:  
`1 + 0 = 1` and `0 + 2 = 2 ≥ 1`. Return **YES**.

---

## Function Description

Complete the `twoArrays` function in the editor below. It should return a string, either `YES` or `NO`.

### Parameters
- `int k`: an integer
- `int A[n]`: an array of integers
- `int B[n]`: an array of integers

### Returns
- `string`: either `YES` or `NO`

---

## Input Format

The first line contains an integer `q`, the number of queries.

The next `q` sets of **3 lines** are as follows:
- The first line contains two space-separated integers `n` and `k`, the size of both arrays `A` and `B`, and the relation variable.
- The second line contains `n` space-separated integers `A[i]`.
- The third line contains `n` space-separated integers `B[i]`.

---

## Constraints

```
1 ≤ q ≤ 10
1 ≤ n ≤ 1000
1 ≤ k ≤ 10⁹
0 ≤ A[i], B[i] ≤ 10⁹
```

---

## Sample Input

```
2
3 10
2 1 3
7 8 9
4 5
1 2 2 1
3 3 3 4
```

## Sample Output

```
YES
NO
```

---

## Explanation

There are two queries:

1. **First Query**  
   We can permute `A = [2, 1, 3]` into `A' = [1, 2, 3]`  
   We can permute `B = [7, 8, 9]` into `B' = [9, 8, 7]`  
   Now, we check:

   ```
   A'[0] + B'[0] = 1 + 9 = 10 ≥ k
   A'[1] + B'[1] = 2 + 8 = 10 ≥ k
   A'[2] + B'[2] = 3 + 7 = 10 ≥ k
   ```

   Since all pairs satisfy the condition, the output is **YES**.

2. **Second Query**  
   We have `A = [1, 2, 2, 1]` and `B = [3, 3, 3, 4]` with `k = 5`.  
   To permute `A` and `B` into a valid `A'` and `B'`, there must be at least three numbers in `A` that are greater than `1`.  
   This is not possible, so the output is **NO**.