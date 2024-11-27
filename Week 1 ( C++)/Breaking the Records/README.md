
# Breaking Records

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

---

### Example

**scores = [12, 24, 10, 24]**

Scores are in the same order as the games played. She tabulates her results as follows:

| Game | Score | Minimum | Maximum | Min | Max |
|------|-------|---------|---------|-----|-----|
| 0    | 12    | 12      | 12      | 0   | 0   |
| 1    | 24    | 12      | 24      | 0   | 1   |
| 2    | 10    | 10      | 24      | 1   | 1   |
| 3    | 24    | 10      | 24      | 1   | 1   |

---

### Function Description

Complete the `breakingRecords` function in the editor below.

`breakingRecords` has the following parameter(s):
- **int scores[n]**: points scored per game

---

### Returns

- **int[2]**: An array with the numbers of times she broke her records.  
  - Index 0 is for breaking most points records.  
  - Index 1 is for breaking least points records.

---

### Input Format

The first line contains an integer `n`, the number of games.

The second line contains `n` space-separated integers describing the respective values of `score_0, score_1, ..., score_{n-1}`.

---

### Constraints

- 1 ≤ n ≤ 1000  
- 0 ≤ scores[i] ≤ 10<sup>8</sup>

---

### Sample Input

```
4
10 5 20 20
```

---

### Sample Output

```
2 0
```

---

### Explanation

Game 0: The first game establishes a record of 10 for both highest and lowest score.  
Game 1: No new records are set.  
Game 2: A new highest score of 20 is set.  
Game 3: The score matches the highest score, so no new records are set.

Results:  
- **High score records broken = 2**  
- **Low score records broken = 0**
