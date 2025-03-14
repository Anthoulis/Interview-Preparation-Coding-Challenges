<?php

function pickingNumbers($a) {
    $frequency = array();
    foreach ($a as $num) {
        if (isset($frequency[$num])) {
            $frequency[$num]++;
        } else {
            $frequency[$num] = 1;
        }
    }

    $maxLength = 0;
    foreach ($frequency as $num => $count) {
        if (isset($frequency[$num + 1])) {
            $maxLength = max($maxLength, $count + $frequency[$num + 1]);
        }
        $maxLength = max($maxLength, $count);
    }

    return $maxLength;
}

// Read input from the command line or a file
echo "Enter the number of elements: ";
$n = intval(trim(fgets(STDIN)));

echo "Enter the elements separated by spaces: ";
$a_temp = rtrim(fgets(STDIN));

$a = array_map('intval', preg_split('/ /', $a_temp, -1, PREG_SPLIT_NO_EMPTY));

// Call the function and print the result
$result = pickingNumbers($a);
echo "The length of the longest subarray is: " . $result . "\n";

?>