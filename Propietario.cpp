#include <iostream>
#include "Persona.cpp"
 //Propietario
 
using namespace std;
class Propietario: Persona {
  private: string nit;
  double cui;
  public: Propietario() {}

  Propietario(string nom, string ape, string dir, string fech, int tel, string n, double c): Persona(nom, ape, dir, fech, tel) {
    nit = n;
    cui = c;
  }
  //Metodos
  // Set -> Modificar
  void setNit(string n) {
    nit = n;
  }
  void setNombre(string nom) {
    nombres = nom;
  }
  void setApellido(string ape) {
    apellidos = ape;
  }
  void setDireccion(string dir) {
    direccion = dir;
  }
  void setFecha(string fech) {
    fecha_nacimiento = fech;
  }
  void setTelefono(int tel) {
    telefono = tel;
  }
  void setCui(double c) {
    cui = c;
  }

  //Get -> (Mostrar)
  string getNit() {
    return nit;
  }
  string getNombre() {
    return nombres;
  }
  string getApellido() {
    return apellidos;
  }
  string getDireccion() {
    return direccion;
  }
  string getFecha() {
    return fecha_nacimiento;
  }
  int getTelefono() {
    return telefono;
  }
  double getCui() {
    return cui;
  }

  void agregar() {
    cout << "==================================" << endl;
    cout << "Atributos agregados exitosamente" << endl;
    cout << "==================================" << endl;
  }
  void mostrar() {
    cout << "=============================================================================" << endl;
    cout << nit << ", " << cui << ", " << nombres << ", " << apellidos << ", " << direccion << ", " << fecha_nacimiento << ", " << telefono << endl;
    cout << "=============================================================================" << endl;
  }
};