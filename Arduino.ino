// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led13 = 13;//car verm
int led12 = 12;//car amar
int led11 = 11;//car verd
int led6 = 6;//ped verm
int led5 = 5;//ped amr
int led4 = 4;//ped verd
int led9 = 9;//car verm
int led8 = 8;//car amr
int led7 = 7;//car verd
char ent;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(ent, INPUT);
}//fim setup

// the loop routine runs over and over again forever:
void loop() {
  ent = Serial.read();
  if(ent == 'a'){
    digitalWrite(led13, HIGH);
    digitalWrite(led12, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4,HIGH);
  }else if(ent = 'b'){
    digitalWrite(led13, HIGH);
    digitalWrite(led12, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led4, LOW);
  }else if(ent = 'c'){
    digitalWrite(led13, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }else if(ent = 'd'){
    digitalWrite(led13, LOW);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }
}//fim loop
