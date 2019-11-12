#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenager.h"
using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager; //stworzenie obiektu

public:

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
