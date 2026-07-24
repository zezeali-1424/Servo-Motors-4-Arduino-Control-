#include <Servo.h>

// إنشاء 4 كائنات للمحركات
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // ربط المحركات بالمنافذ المحددة
  servo1.attach(3); // المحرك الأول (فوق)
  servo2.attach(5); // المحرك الثاني
  servo3.attach(6); // المحرك الثالث
  servo4.attach(9); // المحرك الرابع (تحت)
}

void loop() {
  // الحركة إلى الزاوية 0
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(1000); // الانتظار ثانية واحدة

  // الحركة إلى الزاوية 90
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000); // الانتظار ثانية واحدة

  // الحركة إلى الزاوية 180
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  delay(1000); // الانتظار ثانية واحدة
}
