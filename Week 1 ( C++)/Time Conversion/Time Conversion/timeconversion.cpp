#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hours = std::stoi(s.substr(0, 2)); // Extract hours from the string
    std::string midday = s.substr(8, 2);   // Extract AM/PM part

    // Adjust hours based on AM/PM
    if (midday == "AM") {
        if (hours == 12) {
            hours = 0; // Convert 12 AM to 00 hours
        }
    }
    else { // PM case
        if (hours != 12) {
            hours += 12; // Convert PM hour to 24-hour format, except 12 PM
        }
    }

    // Format hours as two digits
    std::string hourStr = (hours < 10 ? "0" : "") + std::to_string(hours);

    // Build the final string by appending minutes and seconds
    return hourStr + s.substr(2, 6); // Append ":mm:ss" from the original string
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    // For output, use cout in Visual Studio
    cout << result << "\n";

    return 0;
}
