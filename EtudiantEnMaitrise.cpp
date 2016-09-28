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

void EtudiantEnMaitrise::saisie() {
    cout << "Nom de l'étudiant ?" << endl;
    cin >> Etudiant::nom;
    cout << "Prénom de l'étudiant ?" << endl;
    cin >> Etudiant::prenom;

    int nbNotes = 5;

    for (int i = 0; i < nbNotes; ++i) {
        cout << "Note " << i+1 << " ?" << endl;
        cin >> Etudiant::tabnotes[i];
    }

    cout << "Note du mémoire ?" << endl;
    cin >> EtudiantEnMaitrise::note_memoire;
}

void EtudiantEnMaitrise::affichage() {
    cout << "Nom de l'étudiant : " << Etudiant::nom << endl;
    cout << "Prénom de l'étudiant : " << Etudiant::prenom << endl;

    for (int i = 0; i < 5 ; ++i) {
        cout << "Note " << i << " : " << Etudiant::tabnotes[i] << endl;
    }

    cout << "Note du mémoire" << EtudiantEnMaitrise::note_memoire << endl;
    cout << "Moyenne de l'étudiant : " << Etudiant::moyenne() << "\n" << endl;
}

int EtudiantEnMaitrise::admis() {
    float moy = Etudiant::moyenne();

    if(moy >= 10.0 && EtudiantEnMaitrise::note_memoire >= 10){
        return 1;
    } else{
        return 0;
    }
}

float EtudiantEnMaitrise::moyenne(){

    float somme = 0;

    for (int i = 0; i < 5 ; ++i) {
        somme += EtudiantEnMaitrise::tabnotes[i];
    }
    somme += EtudiantEnMaitrise::note_memoire;
    somme /= 6;

    return somme;
}