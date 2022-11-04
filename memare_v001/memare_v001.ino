#include <EEPROM.h> // подключаем библиотеку EEPROM

void setup() {
 int smallNum = 1; // целое число от 0 до 255
  EEPROM.write(0, smallNum); // запись числа в ячейку 0
byte val = EEPROM.read(0); // считываем 1 байт по адресу ячейки
Serial.begin(9600);
Serial.println(val); // выводим значение в послед
}

void loop() {
  // put your main code here, to run repeatedly:

}
