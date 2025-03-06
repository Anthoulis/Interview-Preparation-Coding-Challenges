# XOR Strings 3

In this challenge, the task is to debug the existing code to successfully execute all provided test files.

Given two strings consisting of digits `0` and `1` only, find the **XOR** of the two strings.

To know more about XOR [Click Here](#).

Debug the given function **`strings_xor`** to find the XOR of the two given strings appropriately.

---

## **Note**
- You can modify **at most three lines** in the given code.
- You **cannot add or remove lines** to the code.

---

## **Input Format**
The input consists of two lines:
- The first line contains the first string, **s**.
- The second line contains the second string, **t**.

---

## **Constraints**
```
1 ≤ |s| ≤ 10⁴
|s| = |t|
```

---

## **Output Format**
Print the string obtained by the **XOR** of the two input strings in a single line.

---

## **Sample Input**
```
10101
00101
```

## **Sample Output**
```
10000
```

---

## **Explanation**
The XOR of the two strings `10101` and `00101` is calculated as follows:
```
1 ⊕ 0 = 1
0 ⊕ 0 = 0
1 ⊕ 1 = 0
0 ⊕ 0 = 0
1 ⊕ 1 = 0
```
Result: `10000`
