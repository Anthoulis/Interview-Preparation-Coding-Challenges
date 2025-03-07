using System;
using System.Collections.Generic;
using System.Linq;

class Result
{
    public static int migratoryBirds(List<int> arr)
    {
        Dictionary<int, int> birdCounts = new Dictionary<int, int>();

        // Count occurrences of each bird type
        foreach (int bird in arr)
        {
            if (birdCounts.ContainsKey(bird))
                birdCounts[bird]++;
            else
                birdCounts[bird] = 1;
        }

        // Step 1️: Find the maximum count
        // int maxCount = birdCounts.Values.Max();
        int maxCount = 0;

        foreach (var bird in birdCounts)
        {
            if (bird.Value > maxCount)
            {
                maxCount = bird.Value;
            }
        }

        // Step 2️: Collect all bird types that have this max count
        // List<int> mostFrequentBirds = birdCounts.Where(x => x.Value == maxCount).Select(x => x.Key).ToList();
        List<int> mostFrequentBirds = new List<int>();

        foreach (var bird in birdCounts)
        {
            if (bird.Value == maxCount)
            {
                mostFrequentBirds.Add(bird.Key);
            }
        }

        // Step 3️: Find the smallest bird ID among them
        // int minBirdID = mostFrequentBirds.Min();
        int minBirdID = mostFrequentBirds[0];

        foreach (int birdID in mostFrequentBirds)
        {
            if (birdID < minBirdID)
            {
                minBirdID = birdID;
            }
        }

        return minBirdID;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());
        List<int> arr = Console.ReadLine().Trim().Split(' ').Select(int.Parse).ToList();

        int result = Result.migratoryBirds(arr);
        Console.WriteLine(result);
    }
}
