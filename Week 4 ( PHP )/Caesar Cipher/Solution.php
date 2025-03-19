<?php

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

function caesarCipher($s, $k) {
    $result = ""; // Initialize empty result string
    $k = $k % 26; // Reduce k to a valid shift within 26 letters

    for ($i = 0; $i < strlen($s); $i++) {
        $char = $s[$i];

        // Check if character is uppercase letter (A-Z)
        if (ctype_upper($char)) {
            $newChar = chr(((ord($char) - 65 + $k) % 26) + 65);
        }
        // Check if character is lowercase letter (a-z)
        elseif (ctype_lower($char)) {
            $newChar = chr(((ord($char) - 97 + $k) % 26) + 97);
        }
        // Keep non-alphabetic characters unchanged
        else {
            $newChar = $char;
        }

        // Append the shifted or unchanged character
        $result .= $newChar;
    }

    return $result;
}

// Read input
$n = intval(trim(fgets(STDIN))); // Read string length (not needed in logic)
$s = rtrim(fgets(STDIN), "\r\n"); // Read the input string
$k = intval(trim(fgets(STDIN))); // Read the shift factor

$result = caesarCipher($s, $k);

// Print output
echo $result . "\n";

?>
