# 1 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino"
# 2 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino" 2
# 3 "d:\\Documents\\MATERIALES\\Material Virtual\\2022-1\\Arquitectura de Computadores\\Proyectos\\carroAndando\\carroAndando.ino" 2





BluetoothSerial SerialBT;
Motor M1;
Motor M2;

void carro(int v1, int v2)
{
  M1.SetSpeed(v1);
  M2.SetSpeed(v2);
}

void setup()
{
  //------------- Carro -----------------
  M1.init(25, 17, 26, 0, 2500);
  M1.SetSpeed(0);
  M2.init(16, 27, 14, 1, 2500);
  M2.SetSpeed(0);

  //------------- Bluetooth -----------------
  Serial.begin(115200);
  SerialBT.begin("Carrito_Bluetooth"); // Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop()
{
  if (SerialBT.available())
  {
    char bt=SerialBT.read();
    Serial.println(bt);
    switch (bt) {
      case 'W':
        carro(150,150);
        break;
      case 'S':
        carro(0,0);
        delay(50);
        carro(-150,-150);
        break;
      case 'A':
        carro(0,0);
        delay(50);
        carro(0,150);
        break;
      case 'D':
        carro(0,0);
        delay(50);
        carro(150,0);
        break;
    }

  }
  delay(20);
}
