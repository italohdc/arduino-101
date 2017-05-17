/*
	Arduino #001 - Atividade 2
	Piscar LED em código morse com a mensagem SOS

	Made by Italo Lelis
*/


// Declaração global da variável "tempo", deste modo
// ela estará acessível em todo o código
int tempo = 250;


void setup ()
{
	pinMode(13, OUTPUT); // Declaração do pino 13 como saída
}

void loop ()
{
	// Acende o LED por um tempo fixo
	digitalWrite(13, HIGH);
	delay(250);

	// Apaga o LED de acordo com a variável "tempo"
	digitalWrite(13, LOW);
	delay(tempo);

	tempo = tempo + 250; // Incrementa o tempo a cada ciclo do void loop()
}
