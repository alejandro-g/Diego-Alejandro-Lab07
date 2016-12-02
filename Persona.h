#include <string>
#ifndef PERSONA_H
#define PERSONA_H

using std::string;

class Persona{
  private:
    string usuario;
    string correo;
    string password;
  public:
    Persona(string, string, string);
    ~Persona();
    void setUsuario(string);
    string getUsuario();
    void setCorreo(string);
    string getCorreo();
    void setPassword(string);
    string getPassword();
    string toString();

};
#endif
