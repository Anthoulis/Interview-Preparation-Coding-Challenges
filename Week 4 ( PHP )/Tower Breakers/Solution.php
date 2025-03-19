<?php

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n (number of towers)
 *  2. INTEGER m (height of each tower)
 */

function towerBreakers($n, $m) {
    // If tower height is 1, Player 1 cannot make a move -> Player 2 wins
    if ($m == 1) {
        return 2;
    }

    // If there is an even number of towers, Player 2 wins
    if ($n % 2 == 0) {
        return 2;
    }

    // If there is an odd number of towers, Player 1 wins
    return 1;
}

// Read input
$t = intval(trim(fgets(STDIN))); // Number of test cases

for ($t_itr = 0; $t_itr < $t; $t_itr++) {
    $first_multiple_input = explode(' ', rtrim(fgets(STDIN)));
    
    $n = intval($first_multiple_input[0]); // Number of towers
    $m = intval($first_multiple_input[1]); // Height of towers

    $result = towerBreakers($n, $m);

    echo $result . "\n"; // Print the winner (1 or 2)
}

?>
