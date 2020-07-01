int pinSensor=2; //pin digital 2
int pinLEDgreen=13; //menampilkan status aman (hijau)
int pinLEDred=12; //menampilkan status bahaya (merah)

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinSensor,INPUT);
pinMode(pinLEDgreen,OUTPUT);
pinMode(pinLEDred,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int nilai = digitalRead(pinSensor);
Serial.print(nilai);
if (nilai==1){
digitalWrite(pinLEDgreen,LOW); //bila bahaya
digitalWrite(pinLEDred,HIGH);
Serial.println(" Status: PERINGATAN, Air Masuk, bocor!!!");
delay(100);
}
if(nilai==0){
digitalWrite(pinLEDgreen,HIGH); //bila aman
digitalWrite(pinLEDred,LOW);
Serial.println(" Status: AMAN, tidak bocor");
delay(100);
}
}
