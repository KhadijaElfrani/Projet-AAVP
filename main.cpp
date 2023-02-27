#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <chrono>  // Inclusion de la bibliothèque pour mesurer le temps
#include "header.h"  // Inclusion du fichier d'en-tête contenant la fonction hamming_distance

using namespace std;

int hamming_distance(string str1, string str2);
int hamming_distance_recur(string str1, string str2);

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        cout << "Usage: " << argv[0] << " mot1 [mot2]" << endl;
        return 1;
    }

    if (argc == 2) {
        string mot = argv[1];  // Mot donné
        vector<string> mots_liste = {"Abaisser", "Abricots", "Accolade", "Aspirine", "Avorteur", "Aiguille", "Antivols", "Apparais", "Applique", "Charrier"};

        vector<pair<string, int>> distances;  // Vecteur pour stocker les paires (mot, distance de Hamming)

        // Calcul de la distance de Hamming entre le mot donné et chaque mot de la liste
        for (string mot_liste : mots_liste) {
            int distance = hamming_distance_recur(mot, mot_liste);
            distances.push_back(make_pair(mot_liste, distance));
        }

        // Tri des paires (mot, distance) en fonction de la distance de Hamming (en ordre croissant)
        sort(distances.begin(), distances.end(), [](auto &left, auto &right) {
            return left.second < right.second;
        });

        // Affichage des trois mots les plus proches et de leur distance de Hamming
        cout << "Le mot le plus proche de \"" << mot << "\" est : ";
        for (int i = 0; i < 1; i++) {
            cout << distances[i].first << " (distance de Hamming = " << distances[i].second << ")" << endl;
        }
    } else {  // argc == 3
        string mot1 = argv[1]les;  // Premier mot donné
        string mot2 = argv[2];  // Deuxième mot donné

        auto start_time = chrono::high_resolution_clock::now();  // Mesure du temps de début

        int distance = hamming_distance_recur(mot1, mot2);

        auto end_time = chrono::high_resolution_clock::now();  // Mesure du temps de fin

        auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);  // Calcul de la durée d'exécution en microsecondes
        cout << "La distance de Hamming entre \"" << mot1 << "\" et \"" << mot2 << "\" est : " << distance <<endl;
        cout << "Le temps d'execution est de : "; 
        cout << fixed << setprecision(6) << duration.count() / 1000000.0 << " s" << endl;
    }

    return 0;
}
