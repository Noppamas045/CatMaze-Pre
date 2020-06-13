//ใกล้หมดเวลา แสดงเสียง
unsigned long previousMillis = 0;   //unsigned แสดงว่าเป็นตัวแปรที่เก็บค่าเป็นจำนวนเต็ม แบบไม่คิด เครื่องหมาย      
int sec = 0, m = 0, h = 0;


void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() {
  unsigned long currentMillis = millis(); //millis() คือฟังก์ชันสำหรับนับเวลาในหน่วยมิลลิวินาที

  if(currentMillis - previousMillis >= 1000) {
    sec++;
    if(sec >= 60){
      m++;
      sec = 0;
    }
    if(m >= 60){
      h++;
      m = 0;
    }
    if(h >= 24){
      h = 0;
    }
    previousMillis = currentMillis;
  }
  if (h == 0 && m == 0 && sec >= 25 && sec <= 30 ) {
      Serial.print(h);Serial.print(":");
      Serial.print(m);Serial.print(":");
      Serial.println(sec);
      Serial.println("I love xiao Zhan "); //ปริ้นคำ
      tone(8 , 1000 ,500 ); //เมื่อ 5 วิ ให้pin 8 ดัง tone(pin,ความถี่,ความยาวเสียง)
      delay(1100);
  }
 
}
