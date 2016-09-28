//
// Created by Nicolas Mercier on 27/09/2016.
//

#include "EtudiantEnMaitrise.h"


int EtudiantEnMaitrise::exae_quo(EtudiantEnMaitrise E) {
    if (E.moyenne() == EtudiantEnMaitrise::moyenne() && E.note_memoire == EtudiantEnMaitrise::note_memoire){
        return 1;
    } else {
        return 0;
    }
}