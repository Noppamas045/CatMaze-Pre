int r1=6;
int r2=7;
int r3=8;
int r4=9;
int c1=10;
int c2=11;
int c3=12;
int c4=13;
void setup() {
    pinMode(r1, OUTPUT);
    pinMode(r2, OUTPUT);
    pinMode(r3, OUTPUT);
    pinMode(r4, OUTPUT);
    pinMode(c1, INPUT);
    pinMode(c2, INPUT);
    pinMode(c3, INPUT);
    pinMode(c4, INPUT);
    Serial.begin(9600);
}
void loop(){
    digitalWrite(7,1);
    if (r2 == 1) {
    Serial.println("Dai");
    delay(200);

    }
}