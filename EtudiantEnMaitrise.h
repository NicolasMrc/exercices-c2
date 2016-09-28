//
// Created by Nicolas Mercier on 27/09/2016.
//

#ifndef TP2C_ETUDIANTENMAITRISE_H
#define TP2C_ETUDIANTENMAITRISE_H


#include "Etudiant.h"

class EtudiantEnMaitrise: public Etudiant{
    int note_memoire;
public:
    using Etudiant::exae_quo;
    int exae_quo(EtudiantEnMaitrise E);
};


#endif //TP2C_ETUDIANTENMAITRISE_H
