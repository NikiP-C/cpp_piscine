#include <Squad.hpp>

#include <string>
#include <iostream>

Squad::Squad()
{

}

Squad::Squad(const Squad& nw)
{
    *this = nw;
}

Squad&	Squad::operator=(const Squad& ref)
{
    this->units = ref.units;
    this->SM = ref.SM;
}

Squad::~Squad()
{
    int i; 

    while (i < this->units)
    {
        delete SM[i];
    }
}

int Squad::getCount() const
{
    return (units);
}

ISpaceMarine *Squad::getUnit(int N) const
{
    return (this->SM[N]);
}