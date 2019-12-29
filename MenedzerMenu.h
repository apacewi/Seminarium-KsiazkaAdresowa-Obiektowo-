#ifndef MENEDZERMENU_H
#define MENEDZERMENU_H

#include <iostream>
#include <cstdlib>
#include "MetodyPomocnicze.h"

using namespace std;

class MenedzerMenu{

    MetodyPomocnicze metodyPomocnicze;
public:
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuEdycja();
};
#endif
