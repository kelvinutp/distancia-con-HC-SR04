int a;
float b;
int c;
int d;
void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
pinMode(43,OUTPUT);
pinMode(44,OUTPUT);
pinMode(50,INPUT);
pinMode(51,INPUT);
}

void loop() {
  digitalWrite(44,LOW);
  digitalWrite(5,HIGH);
  delayMicroseconds(50);
  digitalWrite(5,LOW);
  a=map(pulseIn(6,HIGH),270,1700,4,30);
  b=map(a,4,30,1.5,11.8);
  Serial.print("El objeto se encuentra a: ");
  Serial.print(a);
  Serial.print("cm;/");
  Serial.print("El objeto se encuentra a: ");
  Serial.print(b);
  Serial.println("in");
  if (a<15)  
  {
    c=800+(map(a,4,30,1000,20));
    tone(9,c);
    digitalWrite(43,HIGH);
    delay(50);
    digitalWrite(43,LOW);
  }
  else
  {
    digitalWrite(44,HIGH);
    c=0;
    tone(9,c);
    delay(50);
  }
}
