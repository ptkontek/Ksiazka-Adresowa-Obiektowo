#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
using namespace std;

class PlikZAdresatami {

    vector <Adresat> adresaci;
    const string nazwaPlikuZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

    bool czyPlikJestPusty(fstream &plikTekstowy);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresaci);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif
