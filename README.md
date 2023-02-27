Projet Analyse d’algorithmes et validation de programmes – IATIC4 - 2022/2023
-----------------------------------------------------------------
Le but de ce projet est de comparer plusieurs algorithmes resolvant le meme
probleme, en utilisant les differents outils vus en cours. Ces differents algorithmes 
peuvent etre des solutions differentes, ou differentes versions d’une meme solution 
(recursive et iterative, par exemple, ou utilisant des structures de donnees differentes).
La comparaison se fera par une analyse theorique, mais aussi en comparant leurs implementations. 
------------------------------------------------------------------

## Ce projet est réalisé par :
    
    ELFRANI KHADIJA

### Ce travail a été implementé en langage c++ et contient :

### L'algorithme de hamming

    - hamming_iteratif.cpp 
    - hamming_recursif.cpp
	
### L'algorithme de Levenshtein

    - levenshtein_iteratif.cpp
    - levenshtein_recursif.cpp

### Le Main 

    - main.cpp

### Le header

    - header.h

### PRÉ-REQUIS :   

    - compilateur g++ pour compiler et exécuter le code.

### LANCEMENT

    - Vous pouvez lancer le programme en deux modes :
        $$ Un seule argument (un mot de taille 8 exigé) : le programme retourne le mot le plus proche du mot donnée en argument à partir d'une petite liste de mots.

        $$ Deux argument :
            => Si les deux argument sont deux mots de la même taille, le programme affiche la distance hamming entre les deux avec la version itératif.
            => Si les deux mots sont de taille différente, le programme affiche la distance d'edition (Levenshtein) entre les deux avec la version itératif.

### EXÉCUTION
    - Pour lancer le programme, exécutez les commandes suivantes :
        > make
        > ./HAMMING mot OU ./HAMMING mot1 mot2

### REMARQUES 

    - Par défaut, le programme affiche les résultats en exécutant les versions itératifs des deux algorithmes hamming et leveshtein, car dans les deux cas, c'est celle-ci qui était plus puissante, cependant, vous pouvez toujours tester les versions recursives des algorithme en changeant les appels des functions iteratifs dans le main.cpp, avec les functions recursives comme suit :
    hamming_distance_ite -> hamming_distance_recur
    levenshtein_distance_ite -> levenshtein_distance_recur

### FIN
