#include <iostream>
#include <string>

std::string timeConversion(std::string s) {
    if (s.find("PM") != std::string::npos) {
        if (s.substr(0, 2) != "12") {
            // Add 12 hours to the hours part
            s[0] += 1;
            s[1] += 2;
        }
    } else if (s.find("AM") != std::string::npos) {
        if (s.substr(0, 2) == "12") {
            // Change "12" to "00"
            s[0] = '0';
            s[1] = '0';
        }
    }
    // Remove "AM" or "PM" from the string
    s.erase(s.size() - 2);
    return s;
}

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::string result = timeConversion(s);
    std::cout << result << std::endl;

    return 0;
}
