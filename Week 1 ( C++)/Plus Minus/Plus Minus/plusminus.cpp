#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // For find_if (used to remove spaces)
#include <cctype>     // For isspace (used to check spaces)
#include <cstdio>     // For printf
using namespace std;

// Before: We used #include <bits/stdc++.h>, but this is GCC-specific and not supported in Visual Studio.
// #include <bits/stdc++.h>
// 
// After: We must explicitly include the necessary headers like <iostream>, <vector>, etc.

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int pos = 0, neg = 0, zer = 0;
    int n = arr.size();

    // Counting positive, negative, and zero values in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zer++;
    }

    // Printing results formatted to 6 decimal places using printf
    printf("%.6f\n", (double)pos / n);
    printf("%.6f\n", (double)neg / n);
    printf("%.6f\n", (double)zer / n);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);  // Reading input

    int n = stoi(ltrim(rtrim(n_temp)));  // Convert trimmed string to integer

    string arr_temp_temp;
    getline(cin, arr_temp_temp);  // Reading array of numbers as a string

    vector<string> arr_temp = split(rtrim(arr_temp_temp));  // Split string into vector of strings

    vector<int> arr(n);

    // Convert each string to integer and store it in arr
    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }

    plusMinus(arr);  // Call the function

    return 0;
}

// Before: ptr_fun was used here, but it is deprecated and removed in C++11 and later.
// ptr_fun was used like this:
// string ltrim(const string &str) {
//     string s(str);
//     s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
//     return s;
// }

// After: Replace ptr_fun with a lambda function to make the code modern and compatible with C++11 and beyond.
string ltrim(const string& str) {
    string s(str);

    // Using a lambda function instead of ptr_fun
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
        return !isspace(ch);  // Lambda to check if character is not a space
        }));

    return s;
}

// Same replacement for rtrim
string rtrim(const string& str) {
    string s(str);

    // Using lambda instead of ptr_fun for reverse trimming
    s.erase(find_if(s.rbegin(), s.rend(), [](int ch) {
        return !isspace(ch);
        }).base(), s.end());

    return s;
}

// Function to split a string by spaces into a vector of strings
vector<string> split(const string& str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));  // Add each token to the vector
        start = end + 1;
    }

    tokens.push_back(str.substr(start));  // Add the last token
    return tokens;
}
