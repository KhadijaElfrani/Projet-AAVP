#ifndef HEADER_H
#define HEADER_H
#include <string>

using namespace std;
/* HAMMING */
int hamming_distance_ite(string, string);
int hamming_distance_recur(string , string);
/* LEVENSHTEIN */
int levenshtein_distance_ite(string , string, int, int);
int levenshtein_distance_recur(string , string, int , int);
#endif
