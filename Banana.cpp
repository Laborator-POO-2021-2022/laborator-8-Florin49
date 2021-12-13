#include "Banana.hpp"

Banana::Banana():pret_bucata(0)
{}
Banana::Banana(int p):pret_bucata(p)
{}
float Banana::getPret()
{
    return (float)this->pret_bucata;
}
void Banana::afisare()
{
    cout<<"Banana ---> "<<this->getPret()<<"lei\n";
}
char Banana::getInitial()
{
    return 'b';
}