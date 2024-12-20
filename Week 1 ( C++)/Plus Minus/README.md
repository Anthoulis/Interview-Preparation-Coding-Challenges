
# Plus Minus

Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

### Note:
This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10<sup>-4</sup> are acceptable.

---

### Example
**arr = [1, 1, 0, -1, -1]**

There are **n = 5** elements: two positive, two negative, and one zero. Their ratios are:

- Positive: 2/5 = 0.400000
- Negative: 2/5 = 0.400000
- Zero: 1/5 = 0.200000

Results are printed as:
```
0.400000
0.400000
0.200000
```

---

### Function Description

Complete the `plusMinus` function in the editor below.

`plusMinus` has the following parameter(s):
- **int arr[n]**: an array of integers

---

### Print

Print the ratios of positive, negative, and zero values in the array. Each value should be printed on a separate line with 6 digits after the decimal. The function should not return a value.

---

### Input Format

The first line contains an integer, `n`, the size of the array.

The second line contains `n` space-separated integers that describe `arr[i]`.

---

### Constraints

- 0 < n ≤ 100
- -100 ≤ arr[i] ≤ 100

---

### Output Format

Print the following 3 lines, each to 6 decimals:
1. Proportion of positive values
2. Proportion of negative values
3. Proportion of zeros

---

### Sample Input

```
6
-4 3 -9 0 4 1
```

---

### Sample Output

```
0.500000
0.333333
0.166667
```

---

### Explanation

There are 3 positive numbers, 2 negative numbers, and 1 zero in the array.

The proportions of occurrence are:
- Positive: **3/6 = 0.500000**
- Negative: **2/6 = 0.333333**
- Zero: **1/6 = 0.166667**
