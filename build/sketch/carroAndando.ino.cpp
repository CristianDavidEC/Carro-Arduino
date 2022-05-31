#include <Arduino.h>
#line 1 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
#include <TB6612_ESP.h>

Motor M1;
Motor M2;

#line 6 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
void carro(int v1, int v2);
#line 12 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
void setup();
#line 19 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
void loop();
#line 6 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
void carro(int v1, int v2){
  M1.SetSpeed(v1);
  M2.SetSpeed(v2);  
}


void setup() {
  M1.init(25,17,26, 0, 2500);
  M1.SetSpeed(0);
  M2.init(16,27,14, 1, 2500);
  M2.SetSpeed(0);
}

void loop(){
  carro(100,100);
}

