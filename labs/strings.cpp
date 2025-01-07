#include <iostream>
#include <string>
#include <algorithm> // For transform, sort, reverse, find, etc.
#include <cctype>    // For isupper, islower, toupper, tolower
using namespace std;

int main() {
    // Declare and initialize strings
    string s1 = "Hello";
    string s2 = "World";
    string s3 = "hello world";
    string s4 = "   Trimming whitespaces   ";
    string s5 = "abcdxyzabcd";
    
    // Concatenation
    string combined = s1 + " " + s2;
    cout << "Concatenated string: " << combined << endl;

    // Length of string
    cout << "Length of combined string: " << combined.length() << endl;

    // Substring
    cout << "Substring of combined: " << combined.substr(6, 5) << endl; // "World"

    // Find
    size_t found = combined.find("World");
    if (found != string::npos) {
        cout << "'World' found at position: " << found << endl;
    }

    // Replace
    combined.replace(6, 5, "Universe");
    cout << "Replaced string: " << combined << endl;

    // Insert
    combined.insert(13, " Beautiful");
    cout << "After insertion: " << combined << endl;

    // Erase
    combined.erase(13, 10); // Remove " Beautiful"
    cout << "After erasing: " << combined << endl;

    // Convert to uppercase using transform
    transform(s3.begin(), s3.end(), s3.begin(), ::toupper);
    cout << "Uppercase string: " << s3 << endl;

    // Convert to lowercase using transform
    transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
    cout << "Lowercase string: " << s3 << endl;

    // Sort the string
    string sortedStr = s3;
    sort(sortedStr.begin(), sortedStr.end());
    cout << "Sorted string: " << sortedStr << endl;

    // Reverse the string
    string reversedStr = sortedStr;
    reverse(reversedStr.begin(), reversedStr.end());
    cout << "Reversed string: " << reversedStr << endl;

    // Remove whitespaces
    s4.erase(remove_if(s4.begin(), s4.end(), ::isspace), s4.end());
    cout << "String after removing whitespaces: '" << s4 << "'" << endl;

    // Check if a character is uppercase or lowercase
    char ch = 'H';
    if (isupper(ch)) {
        cout << ch << " is uppercase." << endl;
    }
    if (islower(ch)) {
        cout << ch << " is lowercase." << endl;
    }

    // Count occurrences of a character
    char target = 'a';
    int count = count(s5.begin(), s5.end(), target);
    cout << "Count of '" << target << "' in '" << s5 << "': " << count << endl;

    // Find first occurrence of a substring
    size_t first = s5.find("abc");
    if (first != string::npos) {
        cout << "'abc' found at index: " << first << endl;
    }

    // Find last occurrence of a substring
    size_t last = s5.rfind("abc");
    if (last != string::npos) {
        cout << "'abc' last found at index: " << last << endl;
    }

    return 0;
}
