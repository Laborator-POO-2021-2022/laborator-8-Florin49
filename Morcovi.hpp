#ifndef MORCOVI_HPP
#define MORCOVI_HPP

/// Si morcovul are dreptul sa fie fruct <3
#include "Fruct.hpp"

class Morcovi:public Fruct  // pretul final = cantitate/pret_100_grame
{


    int cantitate;///in grame
    int pret_100_grame;

public:
    Morcovi();
    Morcovi(int,int);
    float getPret();
    void afisare();
    char getInitial();
};
#endif