# Maximum Perimeter Triangle

## Problem Statement
Given an array of stick lengths, use 3 of them to construct a **non-degenerate triangle** with the maximum possible perimeter. Return an array of the lengths of its sides as 3 integers in **non-decreasing order**.

If there are several valid triangles having the maximum perimeter:
1. Choose the one with the longest maximum side.
2. If more than one has that maximum, choose from them the one with the longest minimum side.
3. If more than one has that maximum as well, print any one of them.

If no non-degenerate triangle exists, return **[-1]**.

## Example
```text
sticks = [1, 2, 3, 4, 5, 10]
```
The triplet **(1, 2, 3)** will not form a triangle. Neither will **(4, 5, 10)** or **(2, 3, 5)**. The problem is reduced to **(2, 3, 4)** and **(3, 4, 5)**. The longer perimeter is **3 + 4 + 5 = 12**, so the output is:

```text
3 4 5
```

## Function Description
Complete the `maximumPerimeterTriangle` function.

### **Function Signature:**
```csharp
List<int> maximumPerimeterTriangle(List<int> sticks)
```

### **Parameters:**
- `sticks[n]`: the lengths of sticks available.

### **Returns:**
- `List<int>`: The side lengths of the chosen triangle in non-decreasing order, or `[-1]` if no valid triangle exists.

## **Input Format**
- The first line contains a single integer **n**, the size of the array `sticks`.
- The second line contains **n** space-separated integers `sticks[i]`, each a stick length.

## **Constraints**
- `3 ≤ n ≤ 50`
- `1 ≤ sticks[i] ≤ 10^9`

## **Explanation**
### **Sample Case 0:**
```text
Input:
5
1 1 1 3 3

Output:
1 3 3
```
There are 2 possible unique triangles:
1. (1, 1, 1)
2. (1, 3, 3)

The second triangle has the **largest perimeter**, so we print its side lengths in **non-decreasing order**.

### **Sample Case 1:**
```text
Input:
3
1 2 3

Output:
-1
```
The triangle **(1, 2, 3)** is **degenerate**, so it **cannot be constructed**. The function returns **-1**.
-