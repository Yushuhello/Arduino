/*
制作人：林雨阳、虞澍、章勇琪
代码开发者：虞澍
小组成员：虞澍、林雨阳、章勇琪
*/
void setup() {
  // put your setup code here, to run once:
        pinMode(2,OUTPUT);
        pinMode(7,OUTPUT);
        Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
          digitalWrite(2,HIGH);
          const int my=analogRead(A1);
          Serial.println(my);
          if (my>1){
                  digitalWrite(7,HIGH);
                  delay(2000);
                  digitalWrite(7,LOW);
                  delay(2000);
          }
          if (my==0){
                  digitalWrite(7,HIGH);
          }
}