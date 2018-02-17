// -*- mode: c++ -*-

/*
 * All Cali objects must implement Object
 */

#pragma once
class Object {
public:
  virtual std::string toString() = 0;
};
