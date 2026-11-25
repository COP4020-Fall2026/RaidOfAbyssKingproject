#ifndef BOSS_H
#define BOSS_H

#include "Character.h"
#include <string>

class Boss : public Character {
private:
    int rage;

public:
    // constructor
    Boss(const std::string& n);

    // Boss attack functions
    int basicAttack(Character& target) override;
    int specialMove(Character& target) override;

    // Returns the Boss class name
    std::string getClassName() const override;

    // Rage functions 
    int getRage() const;
    void addRage(int amount);
    std::string chooseAttackName() const;
};

#endif
