const int LED_1 = 2;
const int LED_2 = 3;
const int LED_3 = 4;
const int LED_4 = 5;
const int PIN_13 = 13;
const int PIN_12 = 12;
const int PIN_11 = 11;
const int PIN_10 = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode (LED_1 , OUTPUT);
  pinMode (LED_2 , OUTPUT);
  pinMode (LED_3 , OUTPUT);
  pinMode (LED_4 , OUTPUT);
  pinMode (PIN_13 , INPUT);
  pinMode (PIN_12 , INPUT);
  pinMode (PIN_11 , INPUT);
  pinMode (PIN_10 , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int PB_1 = digitalRead(PIN_13);
  int PB_2 = digitalRead(PIN_12);
  int PB_3 = digitalRead(PIN_11);
  int PB_4 = digitalRead(PIN_10);

  int state = 0;
  if (PB_1== HIGH){
    state = 1;
  }
  if (PB_2== HIGH){
    state = 2;
  }
  if (PB_3== HIGH){
    state = 3;
  }
  if (PB_4== HIGH){
    state = 4;
  }
  
  switch (state){
    case 1:
      digitalWrite(LED_1 , HIGH);
      digitalWrite(LED_2 , LOW);
      digitalWrite(LED_3 , LOW);
      digitalWrite(LED_4 , LOW);
      break;
    case 2:
      digitalWrite(LED_1 , HIGH);
      digitalWrite(LED_2 , HIGH);
      digitalWrite(LED_3 , LOW);
      digitalWrite(LED_4 , LOW);
      break;
    case 3:
      digitalWrite(LED_1 , HIGH);
      digitalWrite(LED_2 , HIGH);
      digitalWrite(LED_3 , HIGH);
      digitalWrite(LED_4 , LOW);
      break;
    case 4:
      digitalWrite(LED_1 , HIGH);
      digitalWrite(LED_2 , HIGH);
      digitalWrite(LED_3 , HIGH);
      digitalWrite(LED_4 , HIGH);
      break;
    default:
      digitalWrite(LED_1 , LOW);
      digitalWrite(LED_2 , LOW);
      digitalWrite(LED_3 , LOW);
      digitalWrite(LED_4 , LOW);
      break;
   }
   delay(20);

   

}
