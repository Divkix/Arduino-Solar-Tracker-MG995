#include <Servo.h>

Servo servo_hori;
Servo servo_verti; 

 void setup () 
 {
  servo_hori.attach(9);
  servo_hori.writeMicroseconds(1500);
  servo_verti.attach(10);
  servo_verti.writeMicroseconds(1500);
  
 }

void loop()
{
  int top_left = analogRead(A0);
  int top_right = analogRead(A1);
  int bottom_right = analogRead(A2);

  if ((top_left - top_right) > 60)
  {
    servo_hori_left();
    delay(100);
  }

  if ((top_right - top_left) > 60)
  {
    servo_hori_right();
    delay(100);
  }

  if ((top_right - bottom_right) > 60)
  {
    servo_verti_up();
    delay(100);
  }

  if ((bottom_right - top_right) > 60)
  {
    servo_verti_down();
    delay(100);
  }





}
  void servo_hori_left()
  {
    servo_hori.writeMicroseconds(1300);
    delay(20);
    servo_hori.writeMicroseconds(1500);
  }

  void servo_hori_right()
  {
    servo_hori.writeMicroseconds(1700);
    delay(20);
    servo_hori.writeMicroseconds(1500);
  }
  void servo_verti_up()
  {
    servo_verti.writeMicroseconds(1300);
    delay(20);
    servo_verti.writeMicroseconds(1500);
  }
  void servo_verti_down()
  {
    servo_verti.writeMicroseconds(1700);
    delay(20);
    servo_verti.writeMicroseconds(1500);
  }

