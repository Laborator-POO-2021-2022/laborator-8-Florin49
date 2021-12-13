#ifndef FRUCT_HPP
#define FRUCT_HPP


#include <iostream>
#include <cstring>
using namespace std;


class Fruct
{

public:
     virtual void afisare()=0;
     virtual ~Fruct()=0;
     virtual char getInitial()=0;
     virtual float getPret()=0;
};

#endif