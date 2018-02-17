// -*- mode: c++ -*-

#pragma once

#include "Object.h"
#include "Cons.h"
#include "Pad.h"

class Lambda : public Object {
public:
  Lambda(std::shared_ptr<Pad> p, std::string n, std::shared_ptr<Cons> a, std::shared_ptr<Object> b) :
    name(n), args(a), body(b) { this->pad = std::shared_ptr<Pad>(new Pad(p)); }
private:
  std::shared_ptr<Pad> pad;
  std::string name;
  std::shared_ptr<Cons> args;
  std::shared_ptr<Object> body;
};
