# Migratory Birds

Given an array of bird sightings where every element represents a bird type ID, determine the ID of the most frequently sighted type. If more than one type has been spotted the maximum number of times, return the smallest ID.

## Example

```
arr = [1, 1, 2, 2, 3]
```

There are two each of types `1` and `2`, and one sighting of type `3`. Pick the lower of the two types seen twice: **type 1**.

## Function Description

Complete the `migratoryBirds` function in the editor below.

### **migratoryBirds** has the following parameter(s):

- `int arr[n]`: the types of birds sighted

### **Returns**
- `int`: the lowest type ID of the most frequently sighted birds.

## Input Format

The first line contains an integer, `n`, the size of `arr`.  
The second line describes `arr` as `n` space-separated integers, each a type number of the bird sighted.

## Constraints

- `5 ≤ n ≤ 200000`
- Each type ID is guaranteed to be `1, 2, 3, 4, or 5`.

## Sample Input
```
5
1 1 2 2 3
```

## Sample Output
```
1
```

## Explanation
- There are **two sightings of type 1** and **two sightings of type 2**.
- The smallest ID among the most frequent sightings is **1**.

---