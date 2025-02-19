# Flipping Bits

You will be given a list of 32-bit unsigned integers. Flip all the bits (1 → 0 and 0 → 1) and return the result as an unsigned integer.

---

## Example

### Input:
```
n = 9
```

#### Explanation:
```
9₁₀ = 1001₂
```
We're working with 32 bits, so:
```
00000000000000000000000000001001₂ = 9₁₀
11111111111111111111111111110110₂ = 4294967286₁₀
```
#### Output:
```
4294967286
```

---

## Function Description

Complete the `flippingBits` function in the editor below.

`flippingBits` has the following parameter:
- **int n**: an integer

### Returns
- **int**: the unsigned decimal integer result

---

## Input Format

- The first line of the input contains **q**, the number of queries.
- Each of the next **q** lines contains an integer, **n**, to process.

---

## Constraints
- `1 ≤ q ≤ 100`
- `0 ≤ n < 2³²`

---

## Sample Input:
```
3
2147483647
1
0
```

## Sample Output:
```
2147483648
4294967294
4294967295
```

---

## Explanation

Take **1** for example, as unsigned 32-bits is:
```
00000000000000000000000000000001
```
Flipping the bits gives:
```
11111111111111111111111111111110
```
which in turn is **4294967294**.
