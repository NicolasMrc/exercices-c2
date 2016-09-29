//
// Created by Nicolas Mercier on 28/09/2016.
//

#ifndef TP2C_VECTOR_H
#define TP2C_VECTOR_H


/**
 * Classe Vetcor
 */
class Vector {
private:
    int *t;
    int taille;
public:
    Vector(int taille);
    void afficher();
    void saisie();
    long operator=(Vector v);
    Vector operator+(Vector v);
    Vector operator-(Vector v);
    Vector operator*(Vector v);
    void operator<<(Vector v);
    void operator>>(Vector *v);
};


#endif //TP2C_VECTOR_H
