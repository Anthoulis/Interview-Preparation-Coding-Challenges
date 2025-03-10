using System;
using System.Linq;

class Solution
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine()); // Read number of test cases

        while (t-- > 0)
        {
            int n = int.Parse(Console.ReadLine()); // Read size of the array
            int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray(); // Read the array elements

            Array.Sort(arr); // Sort the array in ascending order
            int mid = (n - 1) / 2; // Find the middle index

            (arr[mid], arr[n - 1]) = (arr[n - 1], arr[mid]); // Swap middle with last element

            // Reverse second half **EXCEPT last element**
            Array.Reverse(arr, mid + 1, n - mid - 2);

            Console.WriteLine(string.Join(" ", arr));
        }
    }
}
