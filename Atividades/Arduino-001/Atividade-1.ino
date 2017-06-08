/*
	Arduino #001 - Atividade 1
	Piscar LED em código morse com a mensagem "SOS"
	
	Made by Italo Lelis
*/

void setup ()
{
	pinMode(13, OUTPUT); // Declaração do pino 13 como saída
}

void loop ()
{
	// Primeiro loop para piscar o LED 3 vezes rapidamente
	// S = * * *
	for (int i=0; i<3; i++)
	{
		digitalWrite(13, HIGH);
		delay(250);
		digitalWrite(13, LOW);
		delay(100);
	}

	// Pausa entre as letras
	digitalWrite(13, LOW);
	delay(200);


	// Segundo loop para piscar o LED 3 vezes devagar
	// O = ─ ─ ─
	for (int i=0; i<3; i++)
	{
		digitalWrite(13, HIGH);
		delay(600);
		digitalWrite(13, LOW);
		delay(100);
	}

	// Pausa entre as letras
	digitalWrite(13, LOW);
	delay(200);


	// Terceiro loop para piscar o LED 3 vezes rapidamente
	// S = * * *
	for (int i=0; i<3; i++)
	{
		digitalWrite(13, HIGH);
		delay(250);
		digitalWrite(13, LOW);
		delay(100);
	}

	// Pausa final
	digitalWrite(13, LOW);
	delay(1000);
}
