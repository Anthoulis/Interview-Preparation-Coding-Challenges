<?php

/*
 * Complete the 'minimumAbsoluteDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as a parameter.
 */

function minimumAbsoluteDifference($arr) {
    // Sort the array
    sort($arr);

    // Initialize min difference with a large value
    $minDiff = PHP_INT_MAX;

    // Compare consecutive elements to find the smallest difference
    for ($i = 0; $i < count($arr) - 1; $i++) {
        $diff = abs($arr[$i + 1] - $arr[$i]); // Absolute difference between adjacent elements
        $minDiff = min($minDiff, $diff); // Update min difference if a smaller one is found
    }

    return $minDiff;
}

// Read input
$n = intval(trim(fgets(STDIN))); // Read the number of elements

$arr_temp = rtrim(fgets(STDIN)); // Read the second line (list of numbers)
$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY)); // Convert to array of integers

$result = minimumAbsoluteDifference($arr);

// Print output
echo $result . "\n";

?>
