
# Lonely Integer

Given an array of integers, where all elements but one occur twice, find the unique element.

### Example
**a = [1, 2, 3, 4, 3, 2, 1]**

The unique element is `4`.

---

### Function Description

Complete the `lonelyinteger` function in the editor below.

`lonelyinteger` has the following parameter(s):

- **int a[n]:** an array of integers

**Returns**
- **int:** the element that occurs only once

---

### Input Format

The first line contains a single integer, **n**, the number of integers in the array.

The second line contains **n** space-separated integers that describe the values in **a**.

---

### Constraints

- \( 1 \leq n < 100 \)
- It is guaranteed that **n** is an odd number and that there is one unique element.
- \( 0 \leq a[i] \leq 100 \), where \( 0 \leq i < n \).

---

### Sample Input
```
7
1 2 3 4 3 2 1
```

### Sample Output
```
4
```

### Explanation

The array contains all integers except `4` twice, so we return `4`.
