#ifndef POKEMON_H
#define POKEMON_H

#include "Moves.h"
#include <string>

class Pokemon
{
public:
    Pokemon(const std::string &name);
    ~Pokemon();

    const std::string &name() const;

private:
    static const size_t maxMoves_ = 4;

    std::string name_, id_;
    int hp_, atk_, def_, spd_, spc_;
    std::string type1_, type2_;
    int catch_rate, base_exp;
    move moves[maxMoves_];
};

#endif /* POKEMON.H */