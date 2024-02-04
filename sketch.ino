int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  
digitalWrite(ledPin, 1);
delay(500);
digitalWrite(ledPin, 0);
delay(500);
digitalWrite(ledPin, 1);
delay(400);
digitalWrite(ledPin, 0);
delay(300);
digitalWrite(ledPin, 1);
delay(200);
digitalWrite(ledPin, 0);
delay(100);
digitalWrite(ledPin, 1);
delay(100);
digitalWrite(ledPin, 0);
delay(100);
digitalWrite(ledPin, 1);
delay(100);
digitalWrite(ledPin, 0);
delay(90);
digitalWrite(ledPin, 1);
delay(80);
digitalWrite(ledPin, 0);
delay(70);
digitalWrite(ledPin, 1);
delay(60);
digitalWrite(ledPin, 0);
delay(50);
digitalWrite(ledPin, 1);
delay(40);
digitalWrite(ledPin, 0);
delay(30);
digitalWrite(ledPin, 1);
delay(20);
digitalWrite(ledPin, 0);
delay(10);
digitalWrite(ledPin, 1);
delay(10);
digitalWrite(ledPin, 0);
}



void loop() {
   if (Serial.available()) {
    // Читаем байт из последовательного порта
    char inChar = Serial.read();
    if (inChar == '1') {
      // Зажигаем диод, если получили '1'
      digitalWrite(ledPin, 1);
    } 
    if (inChar == '0') {
      digitalWrite(ledPin, 0);
    }
}
}