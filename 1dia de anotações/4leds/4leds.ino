#define pin_led1 8  //defininco 1 led
#define pin_led2 9 //defininco 2 led
#define pin_led3 10 //defininco 3 led
#define pin_led4 11  //defininco 4 led

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //vai ser meu debug mod
pinMode(pin_led1, OUTPUT);  //definindo como tipo saida
pinMode(pin_led2, OUTPUT);
pinMode(pin_led3, OUTPUT);
pinMode(pin_led4, OUTPUT);

}

void loop() {
  // mandando um sinal e o arduino ler e mandar um sinal
  if (Serial.available() == '1'){
    char i = Serial.read();
  if(i == '1'){
    digitalWrite(pin_led1, HIGH); }
  if(i == '2'){
    digitalWrite(pin_led2, HIGH); }
  if(i == '3'){
    digitalWrite(pin_led3, HIGH); }
  if(i == '4'){
    digitalWrite(pin_led4, HIGH);}
  if(i == '5'){
    digitalWrite(pin_led1, LOW); }
  if(i == '6'){
    digitalWrite(pin_led2, LOW); }
  if(i == '7'){
    digitalWrite(pin_led3, LOW); }
  if(i == '8'){
    digitalWrite(pin_led4, LOW);}
  if(i == '9'){
   digitalWrite(pin_led1, HIGH);
   digitalWrite(pin_led2, HIGH);
   digitalWrite(pin_led3, HIGH);
   digitalWrite(pin_led4, HIGH);  
  }
  if(i == '0'){
   digitalWrite(pin_led1, LOW);
   digitalWrite(pin_led2, LOW);
   digitalWrite(pin_led3, LOW);
   digitalWrite(pin_led4, LOW);  
  }
  }
}
