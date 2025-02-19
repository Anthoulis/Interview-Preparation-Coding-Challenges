# Matching Strings

There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results.

## Example

### Input:
```
strings = ['ab', 'ab', 'abc']
queries = ['ab', 'abc', 'bc']
```

### Output:
```
[2, 1, 0]
```
There are 2 instances of `'ab'`, 1 of `'abc'`, and 0 of `'bc'`.

---

## Function Description

Complete the `matchingStrings` function in the editor below.

`matchingStrings` has the following parameters:
- **string strings[n]**: an array of strings to search
- **string queries[q]**: an array of query strings

### Returns
- **int[q]**: an array of results for each query

---

## Input Format

- The first line contains an integer **n**, the size of `strings[]`.
- Each of the next **n** lines contains a string **strings[i]**.
- The next line contains an integer **q**, the size of `queries[]`.
- Each of the next **q** lines contains a string **queries[i]**.

---

## Constraints
- `1 ≤ n ≤ 1000`
- `1 ≤ q ≤ 1000`
- `1 ≤ |strings[i]|, |queries[i]| ≤ 20`

---

## Sample Input 1:
```
4
aba
baba
aba
xzb
3
aba
xzb
ab
```

### Sample Output 1:
```
2
1
0
```

---

## Sample Input 2:
```
3
def
de
fgh
3
de
lm
fgh
```

### Sample Output 2:
```
1
0
1
```

---

## Sample Input 3:
```
13
abcde
sdaklfj
asdjf
na
basdn
sdaklfj
asdjf
na
asdjf
na
basdn
sdaklfj
asdjf
5
abcde
sdaklfj
asdjf
na
basdn
```

### Sample Output 3:
```
1
3
4
3
2
```
