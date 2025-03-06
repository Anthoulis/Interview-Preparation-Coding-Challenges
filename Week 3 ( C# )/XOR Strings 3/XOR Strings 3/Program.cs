using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Solution
{
    class Solution
    {
        static void Main(string[] args)
        {
            string s1 = Console.ReadLine().Trim();
            string s2 = Console.ReadLine().Trim();

            System.Text.StringBuilder result = new System.Text.StringBuilder();

            // Loop through each character of both strings
            for (int i = 0; i < s1.Length; i++)
            {
                // XOR operation: If characters are the same, result is '0', otherwise '1'
                result.Append( s1[i] == s2[i] ? '0' : '1');
            }

            Console.Write(result.ToString());
        }
    }
}
