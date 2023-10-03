
// Define os pinos dos sensores de linha
int pinSensor1 = 13;
int pinSensor2 = 12;

// Define os pinos dos motores
int motorA_EN = 5;
int motorA_DIR = 0;
int motorB_EN = 4;
int motorB_DIR = 2;

void setup() {
  Serial.begin(9600);

  // Configura os pinos dos sensores como entrada
  pinMode(pinSensor1, INPUT);
  pinMode(pinSensor2, INPUT);

  // Configura os pinos dos motores como saída
  pinMode(motorA_EN, OUTPUT);
  pinMode(motorA_DIR, OUTPUT);
  pinMode(motorB_EN, OUTPUT);
  pinMode(motorB_DIR, OUTPUT);
}

void loop() {
  // Desligar os dois motores no início do loop
  digitalWrite(motorA_EN, 0);
  digitalWrite(motorB_EN, 0);
  
  // Lê o estado dos sensores de linha
  bool estadoSensor1 = digitalRead(pinSensor1);
  bool estadoSensor2 = digitalRead(pinSensor2);

  int potencia = 110;

  // Configura a direção dos motores (LOW para frente, HIGH para trás)
  digitalWrite(motorA_DIR, LOW);
  digitalWrite(motorB_DIR, LOW);

  // Verifica as condições e controla os motores
  if (estadoSensor1 == HIGH && estadoSensor2 == HIGH) {
    // Ambos os sensores detectam preto, pare o carrinho
    analogWrite(motorA_EN, 0);
    analogWrite(motorB_EN, 0);
  } else if (estadoSensor1 == HIGH && estadoSensor2 == LOW) {
    // Somente motor esquerdo funcionar para frente
    analogWrite(motorA_EN, 0);
    analogWrite(motorB_EN, potencia);
  }
  
   else if (estadoSensor1 == LOW && estadoSensor2 == HIGH) {
    // Somente motor  direito funcionar para frente
   
    analogWrite(motorA_EN, potencia);
    analogWrite(motorB_EN, 0);
  } else {
    // Ambos os motores funcionam para frente
    analogWrite(motorA_EN, potencia);
    analogWrite(motorB_EN, potencia);
  }

  delay(20);
}
