
# Camel Case

Camel Case is a naming style common in many programming languages. In Java, method and variable names typically start with a lowercase letter, with all subsequent words starting with a capital letter (example: startThread). Names of classes follow the same pattern, except that they start with a capital letter (example: BlueCar).

Your task is to write a program that creates or splits Camel Case variable, method, and class names.

---

### Input Format

- Each line of the input file will begin with an operation (S or C) followed by a semi-colon followed by M, C, or V followed by a semi-colon followed by the words you'll need to operate on.
- The operation will either be S (split) or C (combine)
  - M indicates method, C indicates class, and V indicates variable
- In the case of a split operation, the words will be a camel case method, class, or variable name that you need to split into a space-delimited list of words starting with a lowercase letter.
- In the case of a combine operation, the words will be a space-delimited list of words starting with lowercase letters that you need to combine into the appropriate camel case string. Methods should end with an empty set of parentheses to differentiate them from variable names.

---

### Output Format

- For each input line, your program should print either the space-delimited list of words (in the case of a split operation) or the appropriate camel case string (in the case of a combine operation).

---

### Sample Input

```
S;M;plasticCup()
C;V;mobile phone
C;C;coffee machine
S;C;LargeSoftwareBook
C;M;white sheet of paper
S;V;pictureFrame
```

---

### Sample Output

```
plastic cup
mobilePhone
CoffeeMachine
large software book
whiteSheetOfPaper()
picture frame
```

---

### Explanation

- Use Scanner to read in all information as if it were coming from the keyboard.
- Print all information to the console using standard output (`System.out.print()` or `System.out.println()`).
- Outputs must be exact (exact spaces and casing).
