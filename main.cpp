#include<iostream>
#include "include/Stocznia.hpp"
#include "include/Statki.hpp"

using namespace std;
#pragma once



unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};

    unsigned int tmp_towar = 0;
    unsigned int zaglowce_count = 0;

    Statek* s1 = stocznia();

    for(int i=1; i<5; ++i)
    {
        Statek* statek = stocznia();
        cout << dynamic_cast<Zaglowiec*>(statek);
        delete statek;
    }

    cout << s1->transportuj();
    return 1;
}


int main()
{
    transportujFlota(20);
}