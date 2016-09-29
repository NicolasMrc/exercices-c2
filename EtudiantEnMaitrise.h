//
// Created by Nicolas Mercier on 27/09/2016.
//

#ifndef TP2C_ETUDIANTENMAITRISE_H
#define TP2C_ETUDIANTENMAITRISE_H


#include "Etudiant.h"

/**
 * Classe Etudiant en Maitrise
 */
class EtudiantEnMaitrise: public Etudiant{
    int note_memoire;
public:
    int exae_quo(EtudiantEnMaitrise E);
    void saisie();
    void affichage();
    int admis();
    float moyenne();
};


#endif //TP2C_ETUDIANTENMAITRISE_H
