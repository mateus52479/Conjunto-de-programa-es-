#define pin_led1 8  
#define pin_led2 9 
#define pin_led3 10 
#define pin_led4 11  
#define pin_botao1 2
#define pin_botao2 3
int cont = 0;
int tic = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoA = digitalRead(pin_botao1);
  bool botaoB = digitalRead(pin_botao2);

Serial.println(cont);
if (botaoA == 1 && tic == 0){
  cont +=1;
  tic += 1;
}
if (botaoA == 0)
{
  tic = 0;
}


