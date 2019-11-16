#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class MetodyPomocnicze {
    char wczytajZnak();

public:
    static string konwerjsaIntNaString(int liczba);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
