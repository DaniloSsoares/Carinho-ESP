// C++ code
//



int motorA_EN = 5;
int motorA_DIR = 0;

int motorB_EN = 4;
int motorB_DIR = 2;





void setup() {
  Serial.begin(115200);


  

  pinMode(motorA_EN, OUTPUT);
  pinMode(motorA_DIR, OUTPUT);
  pinMode(motorB_EN, OUTPUT);
  pinMode(motorB_DIR, OUTPUT);
}
//EN serve para desligar o motor
//DIR serve para movimentar o motor
void loop() {





    //Tras
      digitalWrite(motorA_EN,HIGH);
      digitalWrite(motorA_DIR,HIGH);
    
      digitalWrite(motorB_EN,HIGH);
      digitalWrite(motorB_DIR,HIGH);
    
      delay(2000);
    
      digitalWrite(motorA_EN,LOW);
      digitalWrite(motorB_EN,LOW);
      delay(1000);
    //Frente

      digitalWrite(motorA_EN,HIGH);
      digitalWrite(motorA_DIR,LOW);
    
      digitalWrite(motorB_EN,HIGH);
      digitalWrite(motorB_DIR,LOW);
    
      delay(2000);
    
      digitalWrite(motorA_EN,LOW);
      digitalWrite(motorB_EN,LOW);
      delay(1000);
        //Direita

      digitalWrite(motorA_EN,HIGH);
      digitalWrite(motorA_DIR,HIGH);
    
      digitalWrite(motorB_EN,HIGH);
      digitalWrite(motorB_DIR,LOW);
    
      delay(2000);
    
      digitalWrite(motorA_EN,LOW);
      digitalWrite(motorB_EN,LOW);
      delay(1000);
      //esquerda

      digitalWrite(motorA_EN,HIGH);
      digitalWrite(motorA_DIR,LOW);
    
      digitalWrite(motorB_EN,HIGH);
      digitalWrite(motorB_DIR,HIGH);
    
      delay(2000);
    
      digitalWrite(motorA_EN,LOW);
      digitalWrite(motorB_EN,LOW);
      delay(1000);
  
 



  
    



    
}
