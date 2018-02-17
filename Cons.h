// -*- mode: c++ -*-

#pragma once

#include "Object.h"

class Cons : public Object {
public:
  Cons(std::shared_ptr<Object> a, std::shared_ptr<Object> d = nullptr) :
    car(a), cdr(d) {}
  std::shared_ptr<Object> car;
  std::shared_ptr<Object> cdr;
};
