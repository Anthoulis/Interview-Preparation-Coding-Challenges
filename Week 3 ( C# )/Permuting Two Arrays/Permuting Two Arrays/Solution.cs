using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Result
{
    public static string twoArrays(int k, List<int> A, List<int> B)
    {
        // Sort A in ascending order
        A.Sort();
        // Sort B in descending order
        B.Sort((x, y) => y.CompareTo(x));

        // Check if the sum of corresponding elements is at least k
        for (int i = 0; i < A.Count; i++)
        {
            if (A[i] + B[i] < k)
                return "NO";
        }
        return "YES";
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        // Ensure this works on local machines
        TextWriter textWriter = new StreamWriter(Console.OpenStandardOutput());

        int q = Convert.ToInt32(Console.ReadLine().Trim());

        for (int qItr = 0; qItr < q; qItr++)
        {
            string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

            int n = Convert.ToInt32(firstMultipleInput[0]);
            int k = Convert.ToInt32(firstMultipleInput[1]);

            List<int> A = Console.ReadLine().TrimEnd().Split(' ').Select(int.Parse).ToList();
            List<int> B = Console.ReadLine().TrimEnd().Split(' ').Select(int.Parse).ToList();

            string result = Result.twoArrays(k, A, B);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
}
