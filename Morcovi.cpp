#include "Morcovi.hpp"

Morcovi::Morcovi():pret_100_grame(0),cantitate(0)
{

}
Morcovi::Morcovi(int c,int p):pret_100_grame(p),cantitate(c)
{

}
float Morcovi::getPret()
{
    return this->cantitate/100.0 * this->pret_100_grame;
}
void Morcovi::afisare()
{
    cout<<"Morcovi ----> "<<this->getPret()<<"lei"<<endl;
    
}
char Morcovi::getInitial()
{
    return 'm';
}