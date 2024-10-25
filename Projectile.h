#pragma once
#include <iostream>


template <typename DamageType>
class Projectile {
protected:
    DamageType damage;   
    float speed;         
    float position;      
    float direction;    

public:
    Projectile(DamageType dmg, float spd, float pos, float dir);
    virtual ~Projectile() {}

   
    virtual void move();

    
    virtual void impact() const;
};


class Fleche : public Projectile<int> {
public:
    Fleche(int dmg, float spd, float pos, float dir);
    void impact() const override; 
};


class BouleDeFeu : public Projectile<float> {
private:
    float explosionRadius;

public:
    BouleDeFeu(float dmg, float spd, float pos, float dir, float radius);
    void impact() const override; 
};

 
