#include <iostream>
#include <string>

using namespace std;

int levenshtein_distance(string s1, string s2, int n, int m) 
{ 
    int cost;
    if (n == 0) 
        return m; 
    if (m == 0) 
        return n; 
    if (s1[n-1] == s2[m-1]) 
        cost = 0; 
    else
        cost = 1; 

    int ins = levenshtein_distance(s1, s2, n, m-1) + 1; 
    int suppr = levenshtein_distance(s1, s2, n-1, m) + 1; 
    int subst = levenshtein_distance(s1, s2, n-1, m-1) + cost; 

    return min(ins, min(suppr, subst)); 
}