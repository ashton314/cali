// -*- mode: c++ -*-

#pragma once
#include "Symbol.h"
#include "Object.h"

#include <map>

class Pad {
public:
  Pad(std::shared_ptr<Pad> p) : parent_pad(p) {}
  std::shared_ptr<Object> lookup(Symbol* s) {
    auto it = this->pad.find(s);
    if (it != this->pad.end()) {
      return it;
    }
    else {
      return this->parent_pad == nullptr ? nullptr : this->parent_pad->lookup(s);
    }
  }
  void set(std::shared_ptr<Symbol> s, std::shared_ptr<Object> v) {
    this->pad[s] = v;
  }
private:
  std::shared_ptr<Pad> parent_pad;
  std::map<std::shared_ptr<Symbol>,std::shared_ptr<Object>> pad;
};
