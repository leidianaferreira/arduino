#include <Ultrasonic.h>

#define trigger 4
#define echo 3
#define G 6
#define Y 7
#define R 8
 float distancia = 0;

 Ultrasonic sensor(trigger,echo);


void setup ()  {

 pinMode (trigger, OUTPUT );
 pinMode (echo,INPUT);
 Serial.begin(9600);
pinMode (G, OUTPUT );
pinMode (Y, OUTPUT );
pinMode (R, OUTPUT );
 
}


void loop () {
 digitalWrite(trigger, 0);
 delay(60);
 digitalWrite(trigger, 1);
 delay(60);
 digitalWrite(trigger, 0);

  distancia = pulseIn(echo, 1);
  distancia = distancia /60;
  Serial.print("Distancia: ");
  Serial.println(distancia);
}
