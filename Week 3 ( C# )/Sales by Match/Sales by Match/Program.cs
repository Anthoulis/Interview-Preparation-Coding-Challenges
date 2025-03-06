using System;
using System.Collections.Generic;
using System.Linq;

class Result
{
    /*
     * Complete the 'sockMerchant' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. INTEGER_ARRAY ar
     */

    public static int sockMerchant(int n, List<int> ar)
    {
        Dictionary<int, int> sockCounts = new Dictionary<int, int>();
        int pairs = 0;

        // Count occurrences of each sock color
        foreach (int sock in ar)
        {
            if (sockCounts.ContainsKey(sock))
                sockCounts[sock]++;
            else
                sockCounts[sock] = 1;
        }

        // Calculate pairs for each sock color
        foreach (var count in sockCounts.Values)
        {
            pairs += count / 2; // Integer division to get number of pairs
        }

        return pairs;
    }
}

class Solution
{
    public static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> ar = Console.ReadLine().Trim().Split(' ')
                        .Select(int.Parse)
                        .ToList();

        int result = Result.sockMerchant(n, ar);

        Console.WriteLine(result); // Print output to console instead of file
    }
}
