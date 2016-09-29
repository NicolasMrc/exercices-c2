//
// Created by Nicolas Mercier on 27/09/2016.
//

#include <iostream>
#include "Voiture.h"

/**
 * constructeur de la classe voiture
 * @param c
 *      le nom de la voiture
 * @param i
 *      l'année de construction de la voiture
 * @return
 *      la voiture
 */
Voiture::Voiture(string* c,int i){
    Voiture::nom = c;
    Voiture::annee = i;
    cout << "Voiture '" << *Voiture::nom << "' de "<< Voiture::annee <<" instantiée !" << endl;
}

/**
 * Destructeur de la classe voiture
 */
Voiture::~Voiture(){
    cout<< "destruction de la voiture '" << *Voiture::nom << "' construite en " << Voiture::annee << endl;
}

/**
 * constructeur par recopie
 * @return
 *      la voiture copiée
 */
Voiture::Voiture(const Voiture& voiture){
    Voiture::annee = voiture.annee;
    Voiture::nom = voiture.nom;
    cout << "Voiture '" << *Voiture::nom << "' de "<< Voiture::annee <<" instantiée par recopie !" << endl;
}

/**
 * Affichage de la Voiture
 * affiches les valeurs des différents attribut de la Voiture
 */
void Voiture::affiche(){
    cout << "Nom de la voiture : " << *Voiture::nom << endl;
    cout << "Année de construction de la voiture : " << Voiture::annee << endl;
}

/**
 * permet d'acceder en lecture au nom de la voiture
 * @return
 *      le nom de la voiture
 */
string* Voiture::GetNom( ){
    return Voiture::nom;
}

/**
 * permet d'acceder en lecture a l'année de construction de la voiture
 * @return
 *      l'année de construction de la voiture
 */
int Voiture::GetAnnee( ){
    return Voiture::annee;
}
