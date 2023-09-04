#include <NewPing.h>

#define Trigger_Pin A0
#define Echo_Pin A1
#define Max_Distance 100
#define LED 10

NewPing sonar(Trigger_Pin, Echo_Pin, Max_Distance);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Jarak: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");

  int jarak=0;
  jarak = sonar.ping_cm();
  Serial.print("Ini Jarak: ");
  Serial.println(jarak);

  pinMode(LED, LOW);

  if(jarak>0 && jarak <15){
    Serial.println("Lampu Nyala");
    pinMode(LED, HIGH);
    delay(5000);
  }
}
