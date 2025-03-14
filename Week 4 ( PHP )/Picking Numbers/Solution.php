<?php

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY $a as parameter.
 */

function pickingNumbers($a) {
    $frequency = array();
    
    // Count frequency of each number
    foreach ($a as $num) {
        if (isset($frequency[$num])) {
            $frequency[$num]++;
        } else {
            $frequency[$num] = 1;
        }
    }

    $maxLength = 0;
    
    // Find the maximum length of subarray with difference ≤ 1
    foreach ($frequency as $num => $count) {
        if (isset($frequency[$num + 1])) {
            $maxLength = max($maxLength, $count + $frequency[$num + 1]);
        }
        $maxLength = max($maxLength, $count);
    }

    return $maxLength;
}

// 🔹 Read input from keyboard (VS Code-friendly)
$n = intval(trim(fgets(STDIN)));  // Read an integer (number of elements)
$a = array_map('intval', explode(' ', trim(fgets(STDIN))));  // Read space-separated integers

// 🔹 Call function and print result
$result = pickingNumbers($a);
echo $result . "\n";  // Print the result directly instead of writing to a file

?>
