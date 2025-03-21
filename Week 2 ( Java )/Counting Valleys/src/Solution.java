import java.io.*;

class Result {

    /*
     * Complete the 'countingValleys' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER steps
     *  2. STRING path
     */

    public static int countingValleys(int steps, String path) {
        // Write your code here
        int valleys = 0;
        int level = 0; // Mountain>0 SeaLevel=0 Valley<0
        for (int i=0; i<path.length();i++)
        {
            // We enter a valley when we are at sea level, and we do a step-down. Only then.
            if ( level==0 && path.charAt(i)=='D')
            {
                valleys++;
            }
            // Keep track of the level
            if (path.charAt(i)=='U')
                level++;
            else
                level--;
        }
        return valleys;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int steps = Integer.parseInt(bufferedReader.readLine().trim());

        String path = bufferedReader.readLine();

        int result = Result.countingValleys(steps, path);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
    