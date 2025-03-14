<?php

function rotateLeft($d, $arr) {
    // Optimized array slicing approach
    $rotated = array_merge(array_slice($arr, $d), array_slice($arr, 0, $d));
    return $rotated;
}

// Read input from keyboard (VS Code-friendly)
$first_multiple_input = explode(' ', rtrim(fgets(STDIN)));
$n = intval($first_multiple_input[0]);
$d = intval($first_multiple_input[1]);

$arr_temp = rtrim(fgets(STDIN));
$arr = array_map('intval', explode(' ', $arr_temp));

// Call function and print result directly instead of writing to a file
$result = rotateLeft($d, $arr);

echo implode(" ", $result) . "\n"; // ✅ Print result in VS Code terminal

?>
