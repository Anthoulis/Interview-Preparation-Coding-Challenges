#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <functional>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    // Your logic for breakingRecords goes here
    // Number of Games played.
    size_t n = scores.size();

    int min = scores[0], max = scores[0];
    int n_min = 0, n_max = 0;

    for (int i = 1; i < n; i++)
    {
        if (scores[i] < min)
        {
            min = scores[i];
            n_min++;
        }
        if (scores[i] > max)
        {
            max = scores[i];
            n_max++;
        }
    }
    // For example, returning an empty vector as placeholder
    return {n_max,n_min};
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split(rtrim(scores_temp_temp));

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        int scores_item = stoi(scores_temp[i]);
        scores[i] = scores_item;
    }

    vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(),
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
