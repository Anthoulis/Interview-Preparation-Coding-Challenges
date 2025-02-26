# Counting Sort 1

## Comparison Sorting
Quicksort usually has a running time of `n × log(n)`, but is there an algorithm that can sort even faster? In general, this is not possible. Most sorting algorithms are comparison sorts, i.e., they sort a list just by comparing the elements to one another. A comparison sort algorithm cannot beat `n × log(n)` (worst-case) running time.

## Alternative Sorting
Another sorting method, the **counting sort**, does not require comparison. Instead, you create an integer array whose index range covers the entire range of values in your array to sort. Each time a value occurs in the original array, you increment the counter at that index. At the end, run through your counting array, printing the value of each non-zero valued index that number of times.

### Example
#### Given:
```
arr = [1, 1, 3, 2, 1]
```
#### Process:
1. All of the values are in the range `[0...3]`, so create an array of zeros.
2. Count occurrences of each value.

| i  | arr[i] | result      |
|----|--------|------------|
| 0  | 1      | [0, 1, 0, 0] |
| 1  | 1      | [0, 2, 0, 0] |
| 2  | 3      | [0, 2, 0, 1] |
| 3  | 2      | [0, 2, 1, 1] |
| 4  | 1      | [0, 3, 1, 1] |

The frequency array is `[0, 3, 1, 1]`. These values can be used to create the sorted array as well: `[1, 1, 1, 2, 3]`.

---

## **Function Description**
Complete the `countingSort` function in the editor below.

**countingSort** has the following parameter(s):
- `arr[n]`: an array of integers

### **Returns**
- `int[100]`: a frequency array

---

## **Input Format**
1. The first line contains an integer **n**, the number of items in `arr`.
2. Each of the next **n** lines contains an integer `arr[i]`, where `0 ≤ arr[i] < 100`.

---

## **Constraints**
- `100 ≤ n ≤ 10⁶`
- `0 ≤ arr[i] < 100`

---

## **Sample Input**
```
100
63 25 73 1 98 73 56 84 86 57 83 25 56 58 99 23 87 32 84 20 99 69 76 72 25 91 20 39 42 96 92 48 22 10 40 44 39 26 78 61 28 23 41 68 99 89 50 30 20 1 43 3 70 95 33 46 44 9 69 48 33 60 65 16 82 67 61 32 21 79 75 75 13 87 70 33 37 15 43 90 66 2 90 40 79 47 86 33 70 95 92 64 58 46 16 45 38 74 84 62 39 43 34 37 71 42 48 23 67 94 2 97 23 82 74 39 86
```

## **Sample Output**
```
0 2 0 2 0 1 0 1 2 1 1 1 0 2 0 1 1 2 0 0 2 0 1 1 1 3 0 2 0 2 0 1 0 2 1 1 2 0 3 2 0 2 1 2 1 1 2 0 3 1 2 1 1 1 0 2 1 2 1 2 1 2 1 1 1 2 1 0 2 2 2 1 0 1 1 2 1 0 0 1 2 1 1 1 1 0 2 1 0 2 1 1 1 0 1 2 1 1 0 1 1 1 0 2
```

---

## **Explanation**
Each of the resulting values `result[i]` represents the number of times **i** appeared in **arr**.

---
