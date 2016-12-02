#include <iostream>
#include "Persona.h"
#ifndef MANAGER_H
#define MANAGER_H

using std::string;

class Manager : public Persona{
  private:
    double sueldo;
  public:
    Manager(string, string, string, double);
    ~Manager();
    void setSueldo(double);
    double getSueldo();
    void toString();

};
#endif
