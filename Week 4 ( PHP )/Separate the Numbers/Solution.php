<?php

/*
 * Complete the 'separateNumbers' function below.
 *
 * The function accepts STRING s as a parameter.
 */

function separateNumbers($s) {
    $n = strlen($s);
    
    // Try different starting numbers
    for ($length = 1; $length <= $n / 2; $length++) {
        // Extract the first number `x` from the string
        $x = substr($s, 0, $length);
        
        // Ensure no leading zero issue
        if ($x[0] == '0') {
            continue;
        }
        
        // Generate the sequence
        $generated = $x;
        $num = intval($x); // Convert `x` to an integer
        
        while (strlen($generated) < $n) {
            $num++; // Increment to the next expected number
            $generated .= strval($num); // Append to the sequence
        }
        
        // If generated sequence matches `s`, print YES and return
        if ($generated === $s) {
            echo "YES $x\n";
            return;
        }
    }
    
    // If no valid sequence found
    echo "NO\n";
}

// Read input
$q = intval(trim(fgets(STDIN)));

for ($q_itr = 0; $q_itr < $q; $q_itr++) {
    $s = rtrim(fgets(STDIN), "\r\n");
    separateNumbers($s);
}

?>
