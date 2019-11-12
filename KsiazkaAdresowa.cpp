#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika() { //aby wywolac metofy z klasy uzytkownikmenager, tworze obiekt uzytk menager

    uzytkownikMenager.rejestracjaUzytkownika(); // dzialania na obiekcie uzytkownikMenager, a nie na klasie Uzytkownik.Menager

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){

    uzytkownikMenager.wypiszWszystkichUzytkownikow();

}


