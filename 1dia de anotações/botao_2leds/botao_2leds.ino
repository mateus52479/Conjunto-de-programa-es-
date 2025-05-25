#define pin_led1 8  //defininco 1 led
#define pin_led2 9 //defininco 2 led
#define pin_led3 10 //defininco 3 led
#define pin_led4 11  //defininco 4 led
#define pin_botao1 2
#define pin_botao2 3
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);    
  pinMode(pin_botao2, INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
bool botao2 = digitalRead(pin_botao1) & digitalRead(pin_botao2);
if (botao2 == 1){
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  }else{
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);

bool botaoA = digitalRead(pin_botao1);
if (botaoA == 1){
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  }else{
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);

bool botaoB =  digitalRead(pin_botao2);
if (botaoB == 1){
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  }else{
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
}
  }
  }
}

