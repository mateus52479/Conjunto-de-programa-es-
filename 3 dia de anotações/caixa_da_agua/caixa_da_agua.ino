#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1,OUTPUT);
  pinMode(pin_led2,OUTPUT);
  pinMode(pin_led3,OUTPUT);
  pinMode(pin_led4,OUTPUT);

  pinMode(pin_botaoA,INPUT);
  pinMode(pin_botaoB,INPUT);
  pinMode(pin_botaoC,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  bool botaoC = digitalRead(pin_botaoC); 

  if (botaoA == 0 && botaoB == 0){
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led4, HIGH);
  }
  if (botaoA == 0 && botaoB == 1){
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led4, HIGH);
  }
  if (botaoA == 1 && botaoB == 0){
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led4, LOW);
  }
  if (botaoA == 1 && botaoB == 1){
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led4, LOW);
  }
}
