#include <TB6612_ESP.h>

Motor M1;
Motor M2;

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
