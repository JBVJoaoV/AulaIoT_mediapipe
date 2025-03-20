# include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    char comando = Serial.read();
    if (comando == '1'){
      myservo.write(180);
    }else if (comando == '2') {
      myservo.write(90);
    }
  }
}
