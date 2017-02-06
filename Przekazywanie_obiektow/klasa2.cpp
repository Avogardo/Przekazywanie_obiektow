#include <iostream>
#include "Klasa2.h"

int Klasa2:: getB()
{
    return b;
}
void Klasa2::setB(int b)
{
    this->b = b;
}

Klasa2::Klasa2(int b)
{
    setB(b);
}
