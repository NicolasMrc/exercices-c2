//
// Created by Nicolas Mercier on 27/09/2016.
//

#ifndef TP2C_ETUDIANT_H
#define TP2C_ETUDIANT_H

#include <iostream>

using  namespace std;

/**
 * Classe etudiant
 */
class Etudiant {
protected:
    string nom, prenom;
    int tabnotes[5];

public:
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int exae_quo(Etudiant E);
};


#endif //TP2C_ETUDIANT_H
