const int led_azul=3;
const int led_rojo=5;
const int led_amarillo=6;
const int retardo=1;

void setup () {
}

void loop () {

	for (int brillo=0;brillo<255;brillo++){
		analogWrite(led_azul,brillo);
		delay(retardo);
	}

  for (int brillo=0;brillo<255;brillo++){
		analogWrite(led_rojo,brillo);
		delay(retardo);
	}

	for (int brillo=255;brillo>0;brillo--){
		analogWrite(led_azul,brillo);
		delay(retardo);
	}

  for (int brillo=0;brillo<255;brillo++){
		analogWrite(led_amarillo,brillo);
		delay(retardo);
	}

	for (int brillo=255;brillo>0;brillo--){
		analogWrite(led_rojo,brillo);
		delay(retardo);
	}

	for (int brillo=255;brillo>0;brillo--){
		analogWrite(led_amarillo,brillo);
		delay(retardo);
	}

}

//cargado en GitHub
