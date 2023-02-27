#include <iostream>
#include <string>

using namespace std;

int hamming_distance(string str1, string str2) {
    int distance = 0;
        if (str1.length() != str2.length()){
            cout <<"C'est pas la même longueur !"<< endl;
            exit(EXIT_FAILURE);
        }
        else{
            for(int i = 0; i < str1.length(); i++) {
                if(str1[i] != str2[i]) {
                    distance++;
                }
            }
            return distance;
        }   
}
