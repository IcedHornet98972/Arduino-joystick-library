
#include <Joy.h>

Joy joy(A4, A5, 5); //URX(x), URY(y), SW(button)

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(joy.UryForservo());
}
