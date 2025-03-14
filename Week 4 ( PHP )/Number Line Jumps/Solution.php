<?php

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

function kangaroo($x1, $v1, $x2, $v2) {
    // Kangaroo 1 must start behind and jump further per step to catch up
    // Equation:  x1 + j * v1 = x2 + j * v2
    // Rearranged: j * (v1 - v2) = (x2 - x1)
    // Solution: j = (x2 - x1) / (v1 - v2)
    // (x2 - x1) % (v1 - v2) == 0 → Ensures j is a whole number (no decimals)
    // (x2 - x1) / (v1 - v2) > 0  → Ensures j is positive (they meet in the future)
    if ($v1 > $v2 && ($x2 - $x1) % ($v1 - $v2) == 0) {
        return "YES";
    }
    return "NO";
}

// Read input
$first_multiple_input = explode(' ', rtrim(fgets(STDIN)));

$x1 = intval($first_multiple_input[0]);
$v1 = intval($first_multiple_input[1]);
$x2 = intval($first_multiple_input[2]);
$v2 = intval($first_multiple_input[3]);

// Compute result and print
$result = kangaroo($x1, $v1, $x2, $v2);
echo $result . "\n";

?>
