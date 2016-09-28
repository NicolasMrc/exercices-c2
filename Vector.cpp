//
// Created by Nicolas Mercier on 28/09/2016.
//

#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(int taille){
    Vector::taille = taille;
    Vector::t = new int[taille];
    for (int i = 0; i < taille; ++i) {
        t[i] = i;
    }
}

void Vector::afficher(){
    for (int i = 0; i < Vector::taille; ++i) {
        cout << "["<<i<<"] -> "<< Vector::t[i] << endl;
    }
}

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
 * methode qui ajoute deux vecteur
 * instancie un tableau de taille egale au tableau le plus grand des deux vector ajouté
 * @param v
 *      le vecteur ajouté
 * @return
 *      le vecteur resultat de l'operation
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
                r.t[i] = Vector::t[i] ;
            } else {
                r.t[i] = - v.t[i];
            }
        }

        return r;
    }
}

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

void Vector::operator<<(Vector v){

    Vector::taille = v.taille;
    Vector::t = new int[Vector::taille];

    for (int i = 0; i < v.taille ; ++i) {
        Vector::t[i] = v.t[i];
    }

}

void Vector::operator>>(Vector *v){
    (*v).taille = Vector::taille;
    (*v).t = new int[(*v).taille];

    for (int i = 0; i < (*v).taille ; ++i) {
        (*v).t[i] = Vector::t[i];
    }
}