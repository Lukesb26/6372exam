const int button = A5;
const int led1 = 5;
const int led2 = 6;
int buttonstate = 0;
void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (button, INPUT);
}

void loop(){
  buttonstate = digitalRead (button);
  if (buttonstate == HIGH) {
    digitalWrite (led1, HIGH);
    digitalWrite (led2, HIGH);
  }
  else { 
    digitalWrite (led1, LOW);
    digitalWrite (led2, LOW);
  }
  
 
}
