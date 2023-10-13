#ifndef heros.h
#define heros.h

#include <iostream>
#include <string>
#include "Arme.h" // Ne pas oublier cet header

class Heros
{
private:
    std::string m_nomheros; // Nom du héros
    int m_vieheros; // Niveau de vie du héros
    Arme m_arme; // Caractéristiques de l'arme qui renvoie vers la classe Arme
public:
    Heros();
    Heros(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    void diminuervie(int vieenmoins);
    void attaquer(Heros &cible);
    void changerarme(std::string nomnouvellearme, int puissancenouvellearme);
    bool vivant() const;
    void afficher() const;
};
#include "heros.cpp"
#endif
