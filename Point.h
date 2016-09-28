//
// Created by Nicolas Mercier on 28/09/2016.
//

#ifndef TP2C_POINT_H
#define TP2C_POINT_H


class Point {
    private:
        int x;
        int y;
        int numero;
    public:
        Point(int x, int y, int numero);
        void deplace(signed x, signed y);
        void affiche();
        long operator=(Point p);
        Point operator+(Point p);
        Point operator-(Point p);
        Point operator*(Point p);
        Point operator/(Point p);
};


#endif //TP2C_POINT_H
