#include <iostream>

using namespace std;
class Persona {
protected: string nombres,apellidos,direccion,fecha_nacimiento;
int telefono;
  protected:
    //constructores
    Persona() {}

  Persona(string nom, string ape, string dir, string fech, int tel) {
    nombres = nom;
    apellidos = ape;
    direccion = dir;
    telefono = tel;
    fecha_nacimiento = fech;
  }

  void agregar();
  void mostrar();
  void modificar();
};