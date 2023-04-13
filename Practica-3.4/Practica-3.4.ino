float i = 0;//Variables
float relacion = 0;//Variables
int Pin = 0;//Variables
int DATO = 0;//Variables
int Vi = 5;//Voltaje Arduino
float Vo = 0;//Variables
float RES1 = 1000;//Resistencia
float RES2 = 0;//Variables

void setup()
{
  
Serial.begin(9600);//Se inicia el monitor serial
  
}


void loop()
{
  
	DATO = analogRead(Pin);
	if(DATO) 
	{
      
	relacion = DATO * Vi;//Se operan
      
	Vo = (relacion)/1023.00;//Se operan
      
	relacion = (Vi/Vo)-1;//Se operan
	RES2 = RES1 * relacion;//Se operan
	i = Vi/(RES1 + RES2) * 1000;//Se operan
      
      
	Serial.print("RES2: ");//Se operan
	Serial.println(RES2);//Se operan

	delay(500);//Tiempo
  
}
  
}