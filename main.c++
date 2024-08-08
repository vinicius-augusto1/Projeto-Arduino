#include <Keypad.h>
#include <Servo.h>

Servo servoMotor;

char* senha = "2024";
int posicao = 0;

const byte ROWS = 4;
const byte COLS = 4;


char keys [ROWS] [COLS] = {
  
  {'1', '2', '3', 'A'},

  {'4', '5', '6', 'B'},
  
  {'7', '8', '9', 'C'},
  
  {'*', '0', '#', 'D'}
  
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int ledVermelho = 12;
const int ledVerde = 11;

bool isOpen = true;

void setup(){
    pinMode (ledVermelho, OUTPUT);
	pinMode (ledVerde, OUTPUT);
  
  	servoMotor.attach(13);
  	setLocked(isOpen); 
}

void loop(){    
  char key = keypad.getKey();
  
  if(key == '*' || key == '#'){
  	posicao = 0;
    setLocked(isOpen);
  }
  
  if(key == senha[posicao]){
  	posicao++;
  }
  
  if(posicao == 4){
  	setLocked(!isOpen); 
  }
  
  delay(100); 
}

void setLocked (int locked){
  if(!locked){
    digitalWrite(ledVermelho, LOW);
	digitalWrite(ledVerde, HIGH);
	servoMotor.write(90);
    return;
  }

digitalWrite(ledVermelho, HIGH);
digitalWrite(ledVerde, LOW);
servoMotor.write(0);  

}
