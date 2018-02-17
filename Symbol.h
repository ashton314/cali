// -*- mode: c++ -*-

#pragma once
#include "Object.h"

class Symbol : public Object {
private:
  std::string name;
public:
  Symbol(std::string s) : name(s) {}
  ~Symbol() {}
  std::string toString() {
    return this->name;
  }
};
