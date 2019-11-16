#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenager.h"
#include "MetodyPomocnicze.h"
using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenager uzytkownikMenager; //stworzenie obiektu
    MetodyPomocnicze metodyPomocnicze;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenager(nazwaPlikuZUzytkownikami) {
        uzytkownikMenager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
