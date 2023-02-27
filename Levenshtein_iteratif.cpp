#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int levenshtein_distance_ite(string s1, string s2, int n, int m) {
    int cost;
    vector<vector<int>> d(n+1, vector<int>(m+1));

    for(int i = 0; i <= n; i++) {
        d[i][0] = i;
    }

    for(int j = 0; j <= m; j++) {
        d[0][j] = j;
    }

    for(int j = 1; j <= m; j++) {
        for(int i = 1; i <= n; i++) {
            if(s1[i-1] == s2[j-1]) {
                cost = 0;
            }
            else {
                cost = 1;
            }

            int ins = d[i][j-1] + 1;
            int suppr = d[i-1][j] + 1;
            int subst = d[i-1][j-1] + cost;

            d[i][j] = min({ins, suppr, subst});
        }
    }

    return d[n][m];
}