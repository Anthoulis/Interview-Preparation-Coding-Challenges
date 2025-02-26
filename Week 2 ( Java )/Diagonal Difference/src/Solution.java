import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'diagonalDifference' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int diagonalDifference(List<List<Integer>> arr) {
        // Get the size of the square matrix (n x n)
        int n = arr.size();

        // Variables to store the sum of both diagonals
        int sumLeft = 0;  // Sum of the primary diagonal (top-left to bottom-right)
        int sumRight = 0; // Sum of the secondary diagonal (top-right to bottom-left)

        // Loop through each row to calculate both diagonal sums
        for (int i = 0; i < n; i++) {
            // Primary diagonal element: arr[i][i] (same row and column index)
            sumLeft += arr.get(i).get(i);

            // Secondary diagonal element: arr[i][n - 1 - i] (opposite column index)
            sumRight += arr.get(i).get(n - 1 - i);
        }

        // Calculate the absolute difference between the two diagonal sums manually
        int difference = sumLeft - sumRight;
        return (difference < 0) ? -difference : difference;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<List<Integer>> arr = new ArrayList<>();

        IntStream.range(0, n).forEach(i -> {
            try {
                arr.add(
                        Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                                .map(Integer::parseInt)
                                .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        int result = Result.diagonalDifference(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
