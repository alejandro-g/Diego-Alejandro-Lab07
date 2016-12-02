#include <iostream>
#include "Persona.h"
#ifndef INTERN_H
#define INTERN_H

using std::string;

class Intern : public Persona{
  private:
    int dias;
  public:
    Intern(string, string, string, int);
    ~Intern();
    void setDias(int);
    int getDias();
    void toString();
};
#endif
