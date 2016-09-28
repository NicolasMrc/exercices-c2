//
// Created by Nicolas Mercier on 28/09/2016.
//

#ifndef TP2C_VECTOR_H
#define TP2C_VECTOR_H


class Vector {
private:
    int *t;
    int taille;
public:
    Vector(int taille);
    void afficher();
    long operator=(Vector v);
    Vector operator+(Vector v);
    Vector operator-(Vector v);
    Vector operator*(Vector v);
    Vector operator<<(Vector v);
    Vector operator>>(Vector v);
};


#endif //TP2C_VECTOR_H
