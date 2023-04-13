int LED1 = 3;//Variables
int LED2 = 5;//Variables
int LED3 = 6;//Variables
int LED4 = 9;//Variables
int LED5 = 10;//Variables
int POT = A0;//Variables
int Potdato;//Variables

void setup(){

  pinMode(POT, INPUT);//Se selecciona si es pin de Entrada o Salida
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  Serial.begin(9600);//Se inicia el monitor serial

  }

void loop(){
  
  Potdato = analogRead(A0);

  digitalWrite(LED1, LOW);//Para que las Leds comiencen en estado bajo
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);



  if(Potdato > 50){//A medida que el potenciometro alcance un numero se encienda el LED
  digitalWrite(LED1, HIGH);//Para que se encienda el LED
  }
  if(Potdato > 170){//A medida que el potenciometro alcance un numero se encienda el LED
  digitalWrite(LED2, HIGH);//Para que se encienda el LED
  }
  if(Potdato > 340){//A medida que el potenciometro alcance un numero se encienda el LED
  digitalWrite(LED3, HIGH);//Para que se encienda el LED
  }
  if(Potdato > 510){//A medida que el potenciometro alcance un numero se encienda el LED
  digitalWrite(LED4, HIGH);//Para que se encienda el LED
  }
  if(Potdato > 680){//A medida que el potenciometro alcance un numero se encienda el LED
  digitalWrite(LED5, HIGH);//Para que se encienda el LED
  }

  Serial.println(Potdato);//Esto lo imprime en el monitor serial
  }