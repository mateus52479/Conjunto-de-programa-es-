#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if(botaoA==1){
    if(tic==0){
      conta++;
      tic=1;
    }
  }else{
    tic=0;
  }
  Serial.println(conta);
  if(botaoA==1){
    Serial.println("Botão A apertado");
  }
  if ((botaoA == 1) && (botaoB == 1)) {
    Serial.println("Dois botões apertados");
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if ((botaoA == 1) || (botaoB == 1)) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((botaoA == 1) ^ (botaoB == 1)) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}
