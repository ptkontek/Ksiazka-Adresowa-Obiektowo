#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikTekstowy {

    const string NAZWA_PLIKU;
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {}

    string pobierzNazwePliku() {
        return NAZWA_PLIKU;
    }

    bool czyPlikJestPusty();
};

#endif
