#include <iostream>
#include "Voiture.h"
#include "Etudiant.h"
#include "Point.h"
#include "EtudiantEnMaitrise.h"
#include "Vector.h"

using namespace std;

void exercice9();
void exercice10();
void exercice11();

int main() {
    cout << "TP 2 C++" << std::endl;
    cout << "Voulez-vous lancer l'exercice 9, l'exercice 10 ou l'exercice 11 ?" << std::endl;
    int choix;
    cin >> choix;
    while (choix < 9 || choix > 11){
        cout << "Voulez-vous lancer l'exercice 9 l'exercice 10 ou l'exercice 11 ?" << std::endl;
        cin >> choix;
    }

    switch (choix){
        case 9:
            cout << "Exercice 9 :" << std::endl;
            exercice9();
            break;
        case 10:
            cout << "Exercice 10 :" << std::endl;
            exercice10();
            break;
        case 11:
            cout << "Exercice 11 :" << std::endl;
            exercice11();
            break;
        default:
            break;
    }

    return 0;
}

void exercice9(){
    string picasso = "picasso";
    string verso = "verso";
    Voiture v1(&picasso, 3453), v2(&verso, 1234);

    cout << "Nom de la voiture 1 : " << *(v1.GetNom()) << endl;
    cout << "Année de construction \n : " << v1.GetAnnee() << endl;

    cout << "Nom de la voiture 2 : " << *(v2.GetNom()) << endl;
    cout << "Année de construction \n : " << v2.GetAnnee() << endl;
}

void exercice10(){
    int choixEtudiant;
    cout << "Quel partie ?\n1 - Etudiant\n2 - Etudiants en maitrise" << endl;
    cin >> choixEtudiant;

    Etudiant e1, e2;
    EtudiantEnMaitrise em1, em2;

    switch (choixEtudiant){
        case 1 :
            e1.saisie();
            e2.saisie();

            cout << "Recapitulatif : " << endl;
            cout << "Etudiant 1 : " << endl;
            e1.affichage();
            cout << "\nEtudiant 2 : " << endl;
            e2.affichage();


            if(e1.admis()==1){
                cout << "\nLe premier étudiant est admis !" << endl;
            } else{
                cout << "Le premier étudiant n'est pas admis !" << endl;
            };

            if(e2.admis()==1){
                cout << "Le deuxième étudiant est admis !" << endl;
            } else{
                cout << "Le deuxième étudiant n'est pas admis !" << endl;
            };

            if(e1.exae_quo(e2) == 1){
                cout << "Les deux élèves sont à égalité !";
            } else {
                cout << "Les deux étudiant ne sont pas a égalité";
            }
            break;


        case 2 :
            em1.saisie();
            em2.saisie();

            cout << "Recapitulatif : " << endl;
            cout << "Etudiant en maitrise 1 : " << endl;
            em1.affichage();
            cout << "\nEtudiant en maitrise 2 : " << endl;
            em2.affichage();

            if(em1.admis()==1){
                cout << "\nLe premier étudiant en maitrise est admis !" << endl;
            } else{
                cout << "Le premier étudiant en maitrise n'est pas admis !" << endl;
            };

            if(em2.admis()==1){
                cout << "Le deuxième étudiant en maitrise est admis !" << endl;
            } else{
                cout << "Le deuxième étudiant en maitrise n'est pas admis !" << endl;
            };

            if(em1.exae_quo(em2) == 1){
                cout << "Les deux élèves en maitrise sont à égalité !";
            } else {
                cout << "Les deux étudiant en maitrise ne sont pas a égalité";
            }
            break;
        default:
            break;
    }


    

}

void exercice11(){
    Point p1(2, 3, 1);
    Point p2(4, 5, 2);
    Point p3(0, 0, 3);

    p1.affiche();
    p2.affiche();

    cout << "\nP3 = P2 :" << endl;
    p3 = p2;
    p3.affiche();

    cout << "\nOperateur =" << endl;
    cout << "P3 = P1 + P2 :" << endl;
    p3 = p1 + p2;
    p3.affiche();

    cout << "\nOperateur -" << endl;
    cout << "P3 = P1 + P2 :" << endl;
    p3 = p1 - p2;
    p3.affiche();

    cout << "\nOperateur *" << endl;
    cout << "P3 = P1 * P2 :" << endl;
    p3 = p1 * p2;
    p3.affiche();

    cout << "\nOperateur /" << endl;
    cout << "P3 = P2 / P1 :" << endl;
    p3 = p2 / p1;
    p3.affiche();



    cout << "\nVector : " << endl;

    cout << "\nVecteur taille 10 :" << endl;
    Vector v1(10);
    v1.afficher();

    cout << "\nVecteur taille 20 :" << endl;
    Vector v2(20);
    v2.afficher();

    Vector v3(5);

    v3<<v2;
    cout << "\nv3<<v2" << endl;
    cout << "\nv3 : " << endl;
    v3.afficher();

    v1>>&v3;
    cout << "\nv1>>v3" << endl;
    cout << "\nv3 : " << endl;
    v3.afficher();
}
