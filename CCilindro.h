//
// Created by mbermejo on 12/10/2023.
//

#ifndef INC_001PROG1_CCILINDRO_H
#define INC_001PROG1_CCILINDRO_H

#include <iostream>
using namespace std;

class CCilindro
{
  private:
    double radio;
    double altura;
  public:
    CCilindro(){}
    CCilindro(double radio, double altura);
    virtual ~CCilindro() { cout << "\nDestruyendo el objeto!!!!";}
    double areaDeLaBase();
    double areaLateral();
    double areaTotal();
    double volumen();
    //----- metodos de acceso-----
    void setRadio(double _radio){ radio = _radio; }
    double getRadio(){ return radio; }
    void setAltura(double _altura) { altura = _altura;}
    double getAltura() { return altura;}
};


#endif //INC_001PROG1_CCILINDRO_H
