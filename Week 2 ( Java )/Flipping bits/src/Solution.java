import java.io.*;
import java.util.stream.*;

class Result {
    /*
     * Complete the 'flippingBits' function below.
     *
     * The function is expected to return a LONG_INTEGER.
     * The function accepts LONG_INTEGER n as parameter.
     */
    public static long flippingBits(long n) {
        long result = 0;
        long power = 1; // Used to reconstruct the flipped number from binary

        // Iterate over all 32 bits of the given number
        for (int i = 0; i < 32; i++) {
            long bit = n % 2; // Extract the rightmost bit (0 or 1)
            long flippedBit = (bit == 0) ? 1 : 0; // Flip the bit
            result += flippedBit * power; // Add to result at correct power of 2
            power *= 2; // Move to the next bit position
            n /= 2; // Remove the rightmost bit from n
        }

        return result;
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, q).forEach(qItr -> {
            try {
                long n = Long.parseLong(bufferedReader.readLine().trim());
                long result = Result.flippingBits(n);
                bufferedWriter.write(String.valueOf(result));
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}
