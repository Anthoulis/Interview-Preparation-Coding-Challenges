using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Result
{
    /*
     * Complete the 'maximumPerimeterTriangle' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts INTEGER_ARRAY sticks as parameter.
     */

    public static List<int> maximumPerimeterTriangle(List<int> sticks)
    {
        // Sort the sticks in descending order
        sticks.Sort((a, b) => b.CompareTo(a));

        // Iterate through the list and check for a valid triangle
        for (int i = 0; i < sticks.Count - 2; i++)
        {
            int a = sticks[i];
            int b = sticks[i + 1];
            int c = sticks[i + 2];

            // Check the Triangle Inequality Theorem: b + c > a
            if (b + c > a)
            {
                // Return the valid triangle in non-decreasing order
                return new List<int> { c, b, a };
            }
        }

        // If no valid triangle is found, return [-1]
        return new List<int> { -1 };
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> sticks = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(sticksTemp => Convert.ToInt
