#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string line;

    // Helper function to trim leading and trailing spaces
    auto trim = [](string& str) {
        // Remove trailing spaces
        while (!str.empty() && isspace(str.back())) str.pop_back();
        // Remove leading spaces
        while (!str.empty() && isspace(str.front())) str.erase(str.begin());
        };

    // Function to split Camel Case strings
    auto splitCamelCase = [](const string& str, char type) -> string {
        string result;
        for (size_t i = 0; i < str.size(); ++i) {
            // Skip parentheses for methods
            if (type == 'M' && (str[i] == '(' || str[i] == ')')) continue;

            // Add a space before uppercase letters, except for the first character
            if (isupper(str[i]) && !result.empty()) {
                result += ' ';
            }

            // Convert character to lowercase and append to result
            result += char(tolower(str[i]));
        }
        return result;
        };

    // Function to combine space-separated words into Camel Case
    auto combineWords = [](const string& str, char type) -> string {
        string result;
        bool capitalize = (type == 'C'); // Capitalize first word for classes

        for (size_t i = 0; i < str.size(); ++i) {
            if (str[i] == ' ') {
                capitalize = true; // Capitalize the next word
            }
            else {
                if (capitalize) {
                    result += char(toupper(str[i])); // Capitalize the character
                    capitalize = false;             // Reset capitalize flag
                }
                else {
                    result += str[i]; // Append as-is
                }
            }
        }

        // Append parentheses for methods
        if (type == 'M') {
            result += "()";
        }

        return result;
        };

    // Read input line by line
    while (std::getline(std::cin, line)) {
        // Trim the input line
        trim(line);

        // Skip empty lines
        if (line.empty()) continue;

        // Parse the input
        char operation = line[0]; // 'S' for split, 'C' for combine
        char type = line[2];      // 'M', 'C', or 'V' for method, class, or variable
        string data = line.substr(4); // Extract the relevant data

        if (operation == 'S') {
            // Perform split operation
            cout << splitCamelCase(data, type) << endl;
        }
        else if (operation == 'C') {
            // Perform combine operation
            cout << combineWords(data, type) << endl;
        }
    }

    return 0;
}
