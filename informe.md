<<<<<<< HEAD
#Procesadores Digitales: Informe práctica 1

##Código Main
<div align="justify">
En el main del programa, inicializamos los valores de voltaje y de temperatura a zero. También declaramos el pin 15 que utilizaremos más adelante para la lectura de voltaje antes del setup. Allí asignamos el pin 23 para el led. En el loop escrivimos el bucle.
</div>

````
#include <Arduino.h>

const int potPin = 15;
int potValue = 0;
float temp = 0;
void setup() {

  Serial.begin(115200);

  pinMode(23, OUTPUT);

  delay(1000);
}

void loop() {

  digitalWrite(23, HIGH);  
  delay(500);                  
  digitalWrite(23, LOW);  
  delay(500);

  potValue = analogRead(potPin);
  Serial.println(potValue);
  
  temp=temperatureRead();
  Serial.println(temp);
  delay(500);
}
````
##Diagrama de flujo

<div class="mermaid">
flowchart TD;
    A[Asignación output led al pin 23 y asignación valor A/D de entrada al pin 15] -->B[Inicializar];    
    B-->G[Imprimir por pantalla valor de voltaje y temperatura];
    G-->C[led ON];
    C-->D[delay 500ms];
    D-->H[Imprimir por pantalla valor de voltaje y temperatura];
    H-->E[led OFF];
    E-->F[delay 500ms];
    F-->B;
</div>

##Diagrama de tiempos


```wavedrom
{ signal : [
    { name: "señal", wave: "0101010101" },
  { name: "led",  wave: "9797979797",   data: "OFF ON OFF ON OFF ON OFF ON OFF ON" },

]}
=======
#Procesadores Digitales: Informe práctica 1

##Código Main

En el main del programa, inicializamos los valores de voltaje y de temperatura a zero. También declaramos el pin 15 que utilizaremos más adelante para la lectura de voltaje antes del setup. Allí asignamos el pin 23 para el led. En el loop escrivimos el bucle.

//#include <Arduino.h>

const int potPin = 15;
int potValue = 0;
float temp = 0;
void setup() {

  Serial.begin(115200);

  pinMode(23, OUTPUT);

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(23, HIGH);  
  delay(500);                  
  digitalWrite(23, LOW);  
  delay(500);

  potValue = analogRead(potPin);
  Serial.println(potValue);
  
  temp=temperatureRead();
  Serial.println(temp);
  delay(500);
}

##Diagrama de flujo

<div class="mermaid">
flowchart TD;
    A[Asignación output led al pin 23 y asignación valor A/D de entrada al pin 15] -->B[Inicializar];    
    B-->G[Imprimir por pantalla valor de voltaje y temperatura];
    G-->C[led ON];
    C-->D[delay 500ms];
    D-->H[Imprimir por pantalla valor de voltaje y temperatura];
    H-->E[led OFF];
    E-->F[delay 500ms];
    F-->B;
</div>

##Diagrama de tiempos


```wavedrom
{ signal : [
    { name: "led", wave: "0.1.0.1.0." },
  { name: "estado",  wave: "2.2.2.2.2.",   data: "OFF ON OFF ON OFF" },
]}
>>>>>>> 542d9b0ec447b4c4f5f8736e26edd64ef3d8d7a1
