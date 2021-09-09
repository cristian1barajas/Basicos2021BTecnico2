#include <Arduino.h>
#include <Operaciones.h>

// Comentario de ejemplo para generar una segunda versión

int number; // Lower Camel Case
int OtherNumber; // Upper Camel Case

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite un número: ");
  while (!Serial.available()) {}
  number = Serial.parseInt();
  Serial.println("Primer número: " + String(number));

  Serial.println("Digite otro número: ");
  while (!Serial.available()) {}
  OtherNumber = Serial.parseInt();
  Serial.println("Segundo número: " + String(OtherNumber));

  int resultadoSuma = suma(number, OtherNumber);
  int resultadoResta = resta(number, OtherNumber);
  int resultadoProducto = producto(number, OtherNumber);
  int resultadoDivision = division(number, OtherNumber);

  Serial.println("Suma: " + String(resultadoSuma));

  while (!Serial.available()) {}
}