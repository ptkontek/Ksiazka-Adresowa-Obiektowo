#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze {
    char wczytajZnak();

public:
    static string konwerjsaIntNaString(int liczba);
    int konwersjaStringNaInt(string liczba);
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif
