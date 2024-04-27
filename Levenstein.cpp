#include <string>

/* Levenstein distance, returns the ammount of insertions, deletions
   or swapps needed to make one string bigger than the other*/
int levenstein(std::string a, std::string b) {
    // return the length of the longer string if the other is empty
    if (std::min(a.length(), b.length()) == 0) {
        return std::max(a.length(), b.length());
    }
    // store three attempts in finding the smallest change
    int mins[3]{
        /* try removing the last character from the first string, add 1
           to count the change, tests deletion of first string */
        levenstein(a.substr(0, a.length() - 1), b) + 1,
        /* try removing the last character from the second string, add 1
           to count the change, tests addition of second string */
        levenstein(a, b.substr(0, b.length() - 1)) + 1,
        /* try removing the last character of both first and second string,
           add 1 if the removed characters were different, tests replacing*/
        levenstein(a.substr(0, a.length() - 1), b.substr(0, b.length() - 1))
        + (a[a.length() - 1] != b[b.length() - 1])
    };
    // return the attempt with the smallest distance
    return *std::min_element(mins, mins + sizeof(mins) / sizeof(int));
}