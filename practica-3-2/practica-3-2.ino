//Oscar Jose Barrios Cotom -2022241

int Led1 = 3;//Variables
int Led2 = 5;//Variables
int Led3 = 6;//Variables
int POT1 = A0;//Variables
int POT2 = A1;//Variables
int POT3 = A2;//Variables
int DATO;//Variables
int DATO2;//Variables
int DATO3;//Variables

void setup()
{
  
  pinMode(POT1, INPUT);//Se selecciona si el pin es de Entrada o Salida
  pinMode(POT2, INPUT);
  pinMode(POT3, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  Serial.begin(9600);//Se inicia el monitor serial

}

void loop()
{


  DATO = analogRead(POT1)/4;
  
  analogWrite(Led3, DATO);
  


  DATO2 = analogRead(POT2)/4;

  analogWrite(Led2, DATO2);



  DATO3 = analogRead(POT3)/4;

  analogWrite(Led1, DATO3);


  Serial.print("R: ");//Se escribe en el monitor serial
  Serial.print(DATO);//Dato que lee el monitor serial

  Serial.print("  G: ");//Se escribe en el monitor serial
  Serial.print(DATO2);//Dato que lee el monitor serial

  Serial.print("  B: ");//Se escribe en el monitor serial
  Serial.println(DATO3);//Dato que lee el monitor serial

}