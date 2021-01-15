#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<typename T>
class ArtystaPlusInstrument
{
public:
    ArtystaPlusInstrument(const Artysta& a_, const T& i_) : a{a_}, i{i_} {}
    unsigned koncert() {return i.liczbaUczestnikow(a);}
private:
    Artysta a;
    T i;
};