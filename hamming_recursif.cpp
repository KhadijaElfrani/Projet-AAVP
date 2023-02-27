#include <iostream>
#include <string>

using namespace std;

int hamming_distance_recur(string str1, string str2) {
    if (str1.length() == 0) {
        return str2.length();
    }
    if (str2.length() == 0) {
        return str1.length();
    }
    if (str1[0] == str2[0]) {
        return hamming_distance_recur(str1.substr(1), str2.substr(1));
    }
    else {
        int distance1 = hamming_distance_recur(str1.substr(1), str2.substr(1));
        int distance2 = hamming_distance_recur(str1, str2.substr(1));
        int distance3 = hamming_distance_recur(str1.substr(1), str2);
        int min_distance = distance1;
        if (distance2 < min_distance) {
            min_distance = distance2;
        }
        if (distance3 < min_distance) {
            min_distance = distance3;
        }
        return 1 + min_distance;
    }
}
