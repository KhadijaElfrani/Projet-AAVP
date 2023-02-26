#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "header.h"  // Inclusion du fichier d'en-tête contenant la fonction hamming_distance

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " mot" << endl;
        return 1;
    }

    string mot = argv[1];  // Mot donné
    vector<string> mots_liste = {"Abaisser", "Abricots", "Accolade", "Aspirine", "Avorteur", "Aiguille", "Antivols", "Apparais", "Applique", "Charrier"};

    vector<pair<string, int>> distances;  // Vecteur pour stocker les paires (mot, distance de Hamming)

    // Calcul de la distance de Hamming entre le mot donné et chaque mot de la liste
    for (string mot_liste : mots_liste) {
        int distance = hamming_distance(mot, mot_liste);
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

    return 0;
}
