#include "Personnage.h"
#include "Statistique.h"
#include <iostream>

int main() {
    
    std::vector<Personnage> personnages = {
        Personnage(100, 50, 30),
        Personnage(120, 45, 40),
        Personnage(90, 60, 35),
        Personnage(110, 55, 25)
    };

    
    double moyenneVie = calculerAttributStatistique(personnages, &Personnage::vie);
    std::cout << "Moyenne de la vie : " << moyenneVie << std::endl;

    
    std::vector<float> attaqueFloat;
    for (const auto& p : personnages) {
        attaqueFloat.push_back(static_cast<float>(p.attaque));
    }
    double varianceAttaque = calculStatistique(attaqueFloat);
    std::cout << "Variance de l'attaque : " << varianceAttaque << std::endl;

    return 0;
}
