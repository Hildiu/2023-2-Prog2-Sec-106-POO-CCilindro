//
// Created by mbermejo on 12/10/2023.
//

#include "CCilindro.h"


CCilindro::CCilindro(double radio, double altura)
{
    this->radio = radio;
    this->altura = altura;

}

double CCilindro::areaDeLaBase()
{
  return 3.1415*radio*radio;
}

double CCilindro::areaLateral()
{
  return 2*3.1415*radio*altura;
}

double CCilindro::areaTotal()
{
    return areaDeLaBase()*2 + areaLateral();
}

double CCilindro::volumen()
{
  return 3.1415 * radio* radio * altura;
}



