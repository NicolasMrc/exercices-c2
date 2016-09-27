//
// Created by Nicolas Mercier on 27/09/2016.
//

#ifndef TP2C_VOITURE_H
#define TP2C_VOITURE_H

using namespace std;


class Voiture
{
    string *nom; // nom du vehicule
    int annee; // annee du vehicule
public:
    Voiture(string* ,int = 0); //constructeur
    ~Voiture(); // destructeur
    Voiture(const Voiture&); // constructeur de recopie
    void affiche();
    string* GetNom( ) ; //fonction d’accès
    int GetAnnee( ) ; //fonction d’accès
};

#endif //TP2C_VOITURE_H
