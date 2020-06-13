int x = A0;
int y = A1;
int sw = 2;
int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(sw, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}
void loop() {
  int vx = analogRead(x);
  int vy = analogRead(y);
  int btn = digitalRead(sw);
  Serial.print(vx);
  Serial.print(",");
  Serial.println(vy);
  if (btn == 1) {
    digitalWrite(led, 0);
  } else {
    digitalWrite(led, 1);
  }
  delay(100);
}