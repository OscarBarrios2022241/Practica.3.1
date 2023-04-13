//Oscar Jose Barrios Cotom - 2022241

int Led = 5;//Variables
int pot = A0;//Variables
int dato = 0;//Variables

void setup()
{
  pinMode(pot, INPUT);//Selecciona si el pin es de Entrada o Salida
  pinMode(Led, OUTPUT);
  Serial.begin(9600);//Se inicia el Monitor Serial
}

void loop()
{
 
  dato = analogRead (pot)/4;
  analogWrite(Led, dato);
  Serial.print("Valor de intensidad: ");//Esto se escribe el monitor serial
  Serial.println(dato);//esto es lo que lee el monitor serial
  delay(1000);//tiempo
}
