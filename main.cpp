#include <iostream> 
#include "heros.h" 

using namespace std; 

int main() {

    // Création des teous les objets Heros
    Heros rey ("Rey", 100, "Sabre Laser", 40);
    Heros finn("Finn", 100, "Pistolet Laser", 30); 
    Heros bb8("BB-8", 50, "Gadgets", 5);
    Heros kylo("Kylo Ren", 150, "Sabre Laser", 40);
    Heros premier("Premier Ordre", 200, "Force", 50);

    // Afficher les informations des Heros
    cout << "*********** Avant le Combat *****" << endl;
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    rey.attaquer (kylo);
    finn.attaquer (kylo);
    kylo.attaquer (rey);

    // Afficher les informations des Heros
    cout << "********** Pendant le Combat **********" << endl; 
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    bb8.attaquer (kylo);
    rey.attaquer (kylo);
    finn.attaquer (kylo);
    bb8.attaquer (kylo); 

    // Afficher les informations des Heros
    cout << "********** Pendant le Combat **********" << endl;
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    premier.attaquer(finn);
    rey.changerarme("force", 50);
    rey.attaquer(premier);
    finn.attaquer(premier);
    bb8.attaquer(premier);
    premier.attaquer(bb8);

    // Afficher les informations des Heros cout << "************ Pendant le Combat ************" << endl;
    cout << "********** Pendant le Combat **********" << endl;
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    finn.changerarme("Sabre laser", 40);
    rey.attaquer(premier);
    finn.attaquer(premier);
    rey.attaquer(premier);
    // Afficher les informations des Heros cout << "************ Fin du Combat ************" << endl;
    cout << "************ Fin du Combat ************" << endl;
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    return 0;
}