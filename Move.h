#ifndef MOVE_H
#define MOVE_H

#include <string>

struct move
{
    std::string effect_;
    int power_;
    std::string type_;
    int accuracy_, pp_;

    move(std::string effect, int power, std::string type, int accuracy, int pp)
        : effect_(effect), power_(power), type_(type), accuracy_(accuracy), pp_(pp) {}
};

#endif /* MOVE.H */