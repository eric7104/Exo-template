#pragma once
#include "Projectile.h"

int main() {
   
    Fleche fleche(50, 10.0f, 0.0f, 1.0f);
    fleche.move();
    fleche.impact();

    
    BouleDeFeu bouleDeFeu(75.5f, 8.0f, 0.0f, 1.0f, 5.0f);
    bouleDeFeu.move();
    bouleDeFeu.impact();

    return 0;
}
