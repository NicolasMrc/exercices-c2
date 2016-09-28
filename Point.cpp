//
// Created by Nicolas Mercier on 28/09/2016.
//

#include <iostream>
#include "Point.h"

using namespace std;


/**
 * méthode permettant de deplacer les coordonnée d'un point
 * @param x
 *      le vecteur de deplacement x du point
 * @param y
 *      le vecteur de deplacement y du point
 */
void Point::deplace(signed x, signed y){
    if ( x >= 0 || (x < 0 && -x < Point::x )){
        Point::x += x;
    } else {
        Point::x = 0;
    }
    if ( y >= 0 || (y < 0 && -y < Point::y )){
        Point::y += y;
    } else {
        Point::y = 0;
    }
}

/**
 * méthode permettant d'afficher les coordonée d'un point
 */
void Point::affiche(){
    cout << "Coordonnée du point " << Point::numero << " : "<< endl;
    cout << "x : " << Point::x << endl;
    cout << "y : " << Point::y << endl;
}

/**
 * Constructeur
 * @return
 *      le point
 */
Point::Point(int x, int y, int numero) {
    Point::x = x;
    Point::y = y;
    Point::numero = numero;
}

long Point::operator=(Point p){
    Point::x = p.x;
    Point::y = p.y;
}

Point Point::operator+(Point p){
    Point r(0,0,4);

    r.x = p.x + Point::x;
    r.y = p.y + Point::y;

    return r;
}

Point Point::operator-(Point p){
    Point r(0,0,0);

    r.x =  Point::x - p.x;
    r.y = Point::y - p.y;

    return r;
}

Point Point::operator*(Point p){
    Point r(0,0,0);

    r.x = p.x * Point::x;
    r.y = p.y * Point::y;

    return r;
}

Point Point::operator/(Point p){
    Point r(0,0,0);

    r.x = Point::x / p.x ;
    r.y = Point::y / p.y ;

    return r;
}