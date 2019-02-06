const int led_rojo=5;
const int led_azul=3;
const int led_amarillo=6;
const int pausa=200;

void setup () {
	pinMode(led_rojo,OUTPUT);
	pinMode(led_azul,OUTPUT);
	pinMode(led_amarillo,OUTPUT);
}

void loop () {
	digitalWrite(led_azul,HIGH);
	digitalWrite(led_rojo,LOW);
	digitalWrite(led_amarillo,LOW);
	delay(pausa);
	
	digitalWrite(led_azul,LOW);
	digitalWrite(led_rojo,HIGH);
	digitalWrite(led_amarillo,LOW);
	delay(pausa);
	
	digitalWrite(led_azul,LOW);
	digitalWrite(led_rojo,LOW);
	digitalWrite(led_amarillo,HIGH);
	delay(pausa);
}
