#include <iostream> 
#include "heros.h" 

using namespace std; 

int main() {

    // Création des teous les objets Heros
    Heros yoda ("Maitre Yoda", 80, "Force", 50);
    Heros luke("Luke Skywalker", 150, "Sabre Laser", 40); 
    Heros leia("Princesse Leia", 150, "Pistolet Laser", 30);
    Heros solo("Han Solo", 100, "Pistolet Laser", 30);
    Heros chewie("Chewbacca", 100, "Pistolet Laser", 30);
    Heros obiwan("Obi-Wan Kenobi", 90, "Force", 50);
    Heros r2d2("R2-D2", 50, "Gadgets", 5);
    Heros palpatine ("Empereur Palpatine", 150, "Force", 50); 
    Heros vador("Dark Vador", 200, "Force", 50);

    // Afficher les informations des Heros
    cout << "*********** Avant le Combat *****" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher(); 
    vador.afficher();

    // Combat
    vador.attaquer (luke);
    luke.attaquer (vador);
    obiwan.attaquer (vador);
    r2d2.attaquer (palpatine);
    palpatine.attaquer (r2d2);

    // Afficher les informations des Heros
    cout << "********** Pendant le Combat **********" << endl; 
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();

    // Combat
    luke.changerarme ("Force", 50);
    luke.attaquer (palpatine);
    chewie.attaquer (vador);
    leia.attaquer (palpatine); 
    solo.attaquer (vador);
    palpatine.attaquer (solo); 
    luke.attaquer(vador);

    // Afficher les informations des Heros
    cout << "********** Pendant le Combat **********" << endl; yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher(); 
    vador.afficher();

    // Combat
    solo.attaquer (palpatine); 
    yoda.attaquer (palpatine);

    // Afficher les informations des Heros cout << "************ Fin du Combat ************" << endl;
    cout << "********** Fin du Combat **********" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    return 0;
}