#include<iostream>
#include "include/Stocznia.hpp"
#include "include/Statki.hpp"

using namespace std;
#pragma once



unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0)
    {
        return 0;
    }
    else
    {
    Stocznia stocznia{};

    unsigned int tmp_towar = 0;
    unsigned int zaglowce_count = 0;

    while(tmp_towar < towar)
    {
        Statek* statek = stocznia();

        tmp_towar = tmp_towar + statek -> transportuj();

        if(dynamic_cast<Zaglowiec*>(statek))
        {
            zaglowce_count = zaglowce_count + 1;
        }
        
        delete statek;
    }

    return zaglowce_count;
    }
}


int main()
{
    cout << transportujFlota(200);
}