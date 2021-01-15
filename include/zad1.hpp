#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

class Artysta
{
  public:
  Artysta(): pseudonim{"Anonim"}, liczbasluchaczy{0} {}
  Artysta(const std::string& art_, unsigned ls_) : pseudonim{art_}, liczbasluchaczy{ls_} {}
  virtual void graj(std::ostream& stream) const {
    stream << pseudonim << ": " << liczbasluchaczy;
  }
  const std::string& getPseudonim() const{
      return pseudonim;
  }
  const unsigned getSluchacze() const{
      return liczbasluchaczy;
  }
  private:
  std::string pseudonim;
  unsigned liczbasluchaczy;

};

