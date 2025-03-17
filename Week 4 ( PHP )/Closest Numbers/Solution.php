<?php

/*
 * Complete the 'closestNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as a parameter.
 */

function closestNumbers($arr) {
    // Sort the array (Sorting helps in easily finding closest pairs)
    sort($arr);

    // Find the minimum absolute difference
    $minDiff = PHP_INT_MAX;
    $pairs = [];

    // Compare consecutive elements
    for ($i = 0; $i < count($arr) - 1; $i++) {
        $diff = abs($arr[$i + 1] - $arr[$i]);

        if ($diff < $minDiff) {
            // New smallest difference found, reset the pairs
            $minDiff = $diff;
            $pairs = [ $arr[$i], $arr[$i + 1] ];
        } elseif ($diff == $minDiff) {
            // Found another pair with the same minimum difference
            $pairs[] = $arr[$i];
            $pairs[] = $arr[$i + 1];
        }
    }

    return $pairs;
}

// Read input
$n = intval(trim(fgets(STDIN)));

$arr_temp = rtrim(fgets(STDIN));
$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));

$result = closestNumbers($arr);

// Print output as space-separated values
echo implode(" ", $result) . "\n";

?>
