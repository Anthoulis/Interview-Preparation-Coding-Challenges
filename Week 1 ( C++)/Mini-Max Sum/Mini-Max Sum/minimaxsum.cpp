/*#include <bits / stdc++.h>*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For find_if
#include <cctype>    // For isspace


using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    long long min = arr[0], max = arr[0];
    int minIndex = 0, maxIndex = 0;
    long long totalSum = 0;

    // Calculate min, max, and total sum
    for (int i = 0; i < arr.size(); ++i) {
        totalSum += arr[i];

        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    // Calculate minSum and maxSum by excluding max and min respectively
    long long minSum = totalSum - max;
    long long maxSum = totalSum - min;

    // Output the result
    std::cout << minSum << " " << maxSum;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](int ch) {
            return !isspace(ch);  // Lambda function to replace ptr_fun
            })
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](int ch) {
            return !isspace(ch);  // Lambda function to replace ptr_fun
            }).base(),
                s.end()
                );

    return s;
}


vector<string> split(const string& str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
