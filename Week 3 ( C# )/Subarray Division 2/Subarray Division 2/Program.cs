using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Result
{
    /*
     * Complete the 'birthday' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY s
     *  2. INTEGER d
     *  3. INTEGER m
     */

    public static int birthday(List<int> s, int d, int m)
    {
        int count = 0;

        // Loop through the list to check each possible segment of length 'm'
        for (int i = 0; i <= s.Count - m; i++)
        {
            // Extract the subarray of size 'm' starting from index 'i'
            List<int> segment = s.Skip(i).Take(m).ToList();

            // Calculate the sum of the extracted segment
            int sum = segment.Sum();

            // Check if the sum matches the required value 'd'
            if (sum == d)
            {
                count++;
            }
        }

        return count;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        // ✅ FIX: Replace OUTPUT_PATH with Console.Out
        TextWriter textWriter = Console.Out;

        // Read the number of chocolate squares
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        // Read the chocolate bar sequence and convert it into a list of integers
        List<int> s = Console.ReadLine().TrimEnd().Split(' ').Select(int.Parse).ToList();

        // Read d (birth day) and m (birth month)
        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');
        int d = Convert.ToInt32(firstMultipleInput[0]);
        int m = Convert.ToInt32(firstMultipleInput[1]);

        // Call the birthday function
        int result = Result.birthday(s, d, m);

        // Print the result
        textWriter.WriteLine(result);
    }
}
