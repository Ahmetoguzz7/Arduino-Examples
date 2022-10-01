//Boolean fonk kullanarak led yakma
//Değişkenleri tanımlamayı unutma!
int potdeger;
boolean durum = false;
#define led 13 

void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);//Seri haberleşmeyi başlatır
}

void loop() {
 potdeger=analogRead(A0);
 if(potdeger>=500){
  durum=true;
 }
 else{
   durum=false;
 }
if(durum == true){

digitalWrite(led,HIGH);
}
else if(durum == false){
  digitalWrite(led,LOW),
}
}
