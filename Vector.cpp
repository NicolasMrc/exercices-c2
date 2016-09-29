//
// Created by Nicolas Mercier on 28/09/2016.
//

#include <iostream>
#include "Vector.h"

using namespace std;

/**
 * constructeur de Vector
 * initialise les valeurs du tableau avec leurs indices
 * @param taille
 *      la taille du tableau dynamique
 * @return
 *      le vecteur
 */
Vector::Vector(int taille){
    Vector::taille = taille;
    Vector::t = new int[taille];
    for (int i = 0; i < taille; ++i) {
        t[i] = i;
    }
}

/**
 * permet d'afficher le tableau dynamique du vecteur
 */
void Vector::afficher(){
    for (int i = 0; i < Vector::taille; ++i) {
        cout << "["<<i<<"] -> "<< Vector::t[i] << endl;
    }
}

/**
 * permet la saisie des entier du tableau dynamique du vecteur
 */
void Vector::saisie(){
    for (int i = 0; i < Vector::taille; ++i) {
        cout << "nombre " << i << " ? " << endl;
        cin >> Vector::t[i];
    }
}

/**
 * surchage de l'operateur =
 * permet d'assigner le tableau dynamique d'un vecteur a un autre
 * @param v
 *      le vecteur a assigner
 * @return
 *      le vecteur
 */
long Vector::operator=(Vector v){
    int tailleMin;
    if (v.taille > Vector::taille){
        tailleMin = Vector::taille;
    } else {
        tailleMin = v.taille;
    }

    for (int i = 0; i < Vector::taille; ++i) {
        Vector::t[i] = v.t[i];
    }
}

/**
 * surcharge de l'operateur +
 * permet d'aditioner les valeur des tableaux dynamiques de deux vecteur dans un vecteur resultat
 * @param v
 *      le vecteur a additionner
 * @return
 *      le vecteur resultat
 */
Vector Vector::operator+(Vector v){

    if (v.taille < Vector::taille){
        Vector r(Vector::taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= v.taille){
                r.t[i] = v.t[i] + Vector::t[i];
            } else {
                r.t[i] = Vector::t[i];
            }
        }

        return r;
    } else {
        Vector r(v.taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= Vector::taille){
                r.t[i] = v.t[i] + Vector::t[i];
            } else {
                r.t[i] = v.t[i];
            }
        }

        return r;
    }
}

/**
 * surcharge de l'operateur -
 * permet de soustraire un vecteur a un autre
 * @param v
 *      le vecteur a soustaire
 * @return
 *      le vecteur resultat
 */
Vector Vector::operator-(Vector v){
    if (v.taille < Vector::taille){
        Vector r(Vector::taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= v.taille){
                r.t[i] = Vector::t[i] - v.t[i] ;
            } else {
                r.t[i] = Vector::t[i];
            }
        }

        return r;
    } else {
        Vector r(v.taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= Vector::taille){
                r.t[i] = Vector::t[i] - v.t[i];
            } else {
                r.t[i] = - v.t[i];
            }
        }
        return r;
    }
}

/**
 * surcharge de l'operateur *
 * permet de multiplier les valeurs des tableaux dynamique des deux vecteurs
 * @param v
 *      le vecteur a mulitiplier
 * @return
 *      le vecteur
 */
Vector Vector::operator*(Vector v){
    if (v.taille < Vector::taille){
        Vector r(Vector::taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= v.taille){
                r.t[i] = v.t[i] * Vector::t[i];
            } else {
                r.t[i] = Vector::t[i];
            }
        }

        return r;
    } else {
        Vector r(v.taille);

        for (int i = 0; i < r.taille ; ++i) {
            if (i <= Vector::taille){
                r.t[i] = v.t[i] * Vector::t[i];
            } else {
                r.t[i] = v.t[i];
            }
        }

        return r;
    }
}

/**
 * surcharge de l'operateur << permet d'assigner le tableau dynamique d'un vecteur passé en parametre au vecteur
 * @param v
 *      le vecteur dont le tableau doit etre assigné
 */
void Vector::operator<<(Vector v){

    Vector::taille = v.taille;
    Vector::t = new int[Vector::taille];

    for (int i = 0; i < v.taille ; ++i) {
        Vector::t[i] = v.t[i];
    }

}

/**
 * permet d'assigner le tableau dynamique au vecteur passé en parametre
 * @param v
 *      le vecteur a qui doit etre assigné le tableau dynamique
 */
void Vector::operator>>(Vector *v){
    (*v).taille = Vector::taille;
    (*v).t = new int[(*v).taille];

    for (int i = 0; i < (*v).taille ; ++i) {
        (*v).t[i] = Vector::t[i];
    }
}