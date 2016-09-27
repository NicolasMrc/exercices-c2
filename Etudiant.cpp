//
// Created by Nicolas Mercier on 27/09/2016.
//

#include "Etudiant.h"

using namespace std;

void Etudiant::saisie(){
    cout << "Nom de l'étudiant ?" << endl;
    cin >> Etudiant::nom;
    cout << "Prénom de l'étudiant ?" << endl;
    cin >> Etudiant::prenom;

    int nbNotes = 5;

    for (int i = 0; i < nbNotes; ++i) {
        cout << "Note " << i+1 << " ?" << endl;
        cin >> Etudiant::tabnotes[i];
    }
}

void Etudiant::affichage(){
    cout << "Nom de l'étudiant : " << Etudiant::nom << endl;
    cout << "Prénom de l'étudiant : " << Etudiant::prenom << endl;
    for (int i = 0; i < 5 ; ++i) {
        cout << "Note " << i << " : " << Etudiant::tabnotes[i] << endl;
    }
    cout << "Moyenne de l'étudiant : " << Etudiant::moyenne() << "\n" << endl;

}
float Etudiant::moyenne(){

    float somme = 0;

    for (int i = 0; i < 5 ; ++i) {
        somme += Etudiant::tabnotes[i];
    }
    somme /= 5;

    return somme;
}

int Etudiant::admis(){
    float moy = Etudiant::moyenne();

    if(moy >= 10.0){
        return 1;
    } else{
        return 0;
    }
}

int Etudiant::exae_quo(Etudiant E){
    if(Etudiant::moyenne() == E.moyenne()){
        return 1;
    } else{
        return 0;
    }
}
