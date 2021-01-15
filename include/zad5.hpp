#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template<typename T>
unsigned liczPopularnych(T e1, T e2)
{
    return std::count_if(e1, e2, [](const Artysta& o){return o.getSluchacze() > 1000;});
}