# Procesadores Digitales: Informe práctica 1

## Objetivo
El objetivo de esta práctica consiste en el parpadeo periódico de un led, sacando por pantalla los distintos valores que toma la tensión dependiendo de la fuente de alimentación que recibe.

## Código Main

<div align="justify">

En el main del programa, inicializamos los valores de voltaje (`int potValue = 0;`) y de temperatura a zero (`float temp = 0;`). También declaramos el pin 15 (`const int potPin = 15;`) que utilizaremos más adelante para la lectura de voltaje antes del setup. En el `void setup()` asignamos el pin 23 (`pinMode(23, OUTPUT);`) para el led después de establecer la velocidad de datos en bits por segundo para la transmisión de datos en serie con el comando `Serial.begin(115200);`. A continuación, utilizamos la función `delay()` que nos sirve para detener la ejecución del programa durante tantos milisegundos como se especifique, de este modo hacemos parar el programa antes de entrar en el bucle `void loop()`. Con la función `digitalWrite()` podemos escribir valores lógicos digitales, es decir `HIGH(1)` o `LOW(0)`, en un pin de salida de una tarjeta Arduino. Entre ambos estados, hacemos un `delay(1000)`, con lo que nos esperaremos 1 segundo entre uno y otro. Mientras hace todo este proceso, con `analogRead()` conseguimos que la variable que recoge el valor del voltaje `potValue` lea el valor del pin especificado. La función `Serial.println()` saca por pantalla lo que se desee. Para la temperatura seguimos el mismo procedimiento, tan solo cambiando las variables a las de temperatura.
</div>

```
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
```

## Diagrama de flujo

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

## Diagrama de tiempos

``` wavedrom
{ signal : [
    { name: "led", wave: "0101010101" },
  { name: "estado",  wave: "9797979797",   data: "OFF ON OFF ON OFF ON OFF ON OFF ON" },
]}
