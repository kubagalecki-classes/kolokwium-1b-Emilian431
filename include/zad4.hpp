#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int number, const std::string& name)
{
    std::vector<Artysta> wk;
    if (name.size() != number)
        throw std::logic_error("blad");
    
    for(int i = 1; i < liczba+1; i++)
        wk.push_back(Artysta{name, static_cast<unsigned>(i)});
    
    return wk;
}