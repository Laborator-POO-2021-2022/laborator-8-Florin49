#include "Nuci.hpp"

Nuci::Nuci():pret_100_grame(0),cantitate(0)
{

}
Nuci::Nuci(int c,int p):pret_100_grame(p),cantitate(c)
{

}
float Nuci::getPret()
{
    return this->cantitate/100.0 * this->pret_100_grame;
}
void Nuci::afisare()
{
    cout<<"Nuci ---> "<<this->getPret()<<"lei"<<endl;
    
}
char Nuci::getInitial()
{
    return 'n';
}