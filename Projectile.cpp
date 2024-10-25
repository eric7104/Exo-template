#pragma once
#include "Projectile.h"


template <typename DamageType>
Projectile<DamageType>::Projectile(DamageType dmg, float spd, float pos, float dir)
    : damage(dmg), speed(spd), position(pos), direction(dir) {}

template <typename DamageType>
void Projectile<DamageType>::move() {
    position += speed * direction;
    std::cout << "Le projectile se déplace à la position : " << position << std::endl;
}

template <typename DamageType>
void Projectile<DamageType>::impact() const {
    std::cout << "Impact du projectile avec des dégâts de base : " << damage << std::endl;
}


Fleche::Fleche(int dmg, float spd, float pos, float dir)
    : Projectile<int>(dmg, spd, pos, dir) {}

void Fleche::impact() const {
    std::cout << "La flèche perce et inflige " << damage << " points de dégâts à chaque ennemi" << std::endl;
}


BouleDeFeu::BouleDeFeu(float dmg, float spd, float pos, float dir, float radius)
    : Projectile<float>(dmg, spd, pos, dir), explosionRadius(radius) {}

void BouleDeFeu::impact() const {
    std::cout << "La boule de feu explose avec un rayon de " << explosionRadius
        << " et inflige " << damage << " points de dégâts de zone" << std::endl;
}


template class Projectile<int>;
template class Projectile<float>;
