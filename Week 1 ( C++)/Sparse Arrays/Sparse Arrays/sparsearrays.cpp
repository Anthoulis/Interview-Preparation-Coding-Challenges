#include <iostream>   // For cin, cout
#include <fstream>    // For ofstream
#include <string>     // For string operations like substr, stoi
#include <vector>     // For vector
#include <algorithm>  // For find_if
#include <cctype>     // For isspace
using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> results(queries.size(), 0);

    for (size_t i = 0; i < queries.size(); i++) {
        for (const string& str : strings) {
            if (queries[i] == str) {
                results[i]++;
            }
        }
    }

    return results;
}

int main()
{
    // Use an output file "output.txt" for Visual Studio
    ofstream fout("output.txt");

    string strings_count_temp;
    getline(cin, strings_count_temp);

    int strings_count = stoi(ltrim(rtrim(strings_count_temp)));
    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);
        strings[i] = strings_item;
    }

    string queries_count_temp;
    getline(cin, queries_count_temp);

    int queries_count = stoi(ltrim(rtrim(queries_count_temp)));
    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);
        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];
        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

/*
 * Trims leading whitespace from the given string.
 */
string ltrim(const string& str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );
    return s;
}

/*
 * Trims trailing whitespace from the given string.
 */
string rtrim(const string& str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(),
        s.end()
    );
    return s;
}
