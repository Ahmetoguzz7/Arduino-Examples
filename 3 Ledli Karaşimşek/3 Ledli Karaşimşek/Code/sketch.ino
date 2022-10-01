int kirmizi=10;
int yesil=9;
int mavi=3;




void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT);
pinMode(9,OUTPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(kirmizi,HIGH);
delay(250);
digitalWrite(kirmizi,LOW);
delay(250);
digitalWrite(yesil,HIGH);
delay(250);
digitalWrite(yesil,LOW);
delay(250);
digitalWrite(mavi, HIGH);
delay(250);
digitalWrite(mavi,LOW);

}
