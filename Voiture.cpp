//
// Created by Nicolas Mercier on 27/09/2016.
//

#include <iostream>
#include "Voiture.h"

Voiture::Voiture(string* c,int i){
    Voiture::nom = c;
    Voiture::annee = i;
}

Voiture::~Voiture(){

}

Voiture::Voiture(const Voiture&){

}

void Voiture::affiche(){

}
string* Voiture::GetNom( ){
    return Voiture::nom;
}
int Voiture::GetAnnee( ){
    return Voiture::annee;
}
