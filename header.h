#ifndef HEADER_H
#define HEADER_H
#include <string>

using namespace std;

int hamming_distance(string, string);
int hamming_distance_recur(string , string);
int levenshtein_distance(string , string, int , int);
int levenshtein_distance_ite(string , string, int, int);

#endif
