# Arduino #001

## Introdução

O programa que você utiliza para escrever o seu código e carregá-lo para o Arduino é chamado de Arduino IDE. Nele você consegue facilmente criar um código e enviá-lo para a placa Arduino.

[Download Arduino IDE](https://www.arduino.cc/en/Main/Software#download)

Para carregar o seu código para o Arduino, você primeiro precisa configurar no programa a placa que será utilizada. Para isso, primeiramente você deve ir no menu ``Ferramentas (Tools) > Placa (Board)`` e selecionar a sua placa. Conecte a placa ao computador, acesse o menu ``Ferramentas (Tools) > Porta (Port)`` e selecione a porta correspondente à sua placa.

> Neste guia iremos utilizar o **Arduino Uno**, mas a configuração e utilização de outras placas, como o _Arduino Nano_ e o _Arduino Mega_, são semelhantes.

Um código para o Arduino necessita de ao menos duas funções básicas:

```arduino
void setup () {
	// Eu serei executado apenas uma vez
}

void loop () {
	// Eu serei executado infinitamente
}
```

A função ``void setup()`` será executada apenas uma vez ao início da execução do código na placa. A função ``void loop()`` será executada após o término do ``void setup()`` infinitamente.

## _void setup ()_ e _void loop ()_

A função ``void setup()`` pode ser utilizada para configurar os pinos que serão utilizados durante o código. Para configurar um pino digital como entrada ou saída, utiliza-se a função:

```arduino
pinMode(pino, modo);
  - pino: pino digital a ser configurado
  - modo: INPUT para definir como entrada ou OUTPUT para definir como saída

ex.: pinMode(13, OUTPUT); // pino 13, saída
```

A função ``void loop()`` irá executar o código contido nela repetidamente até que a placa seja desligada. Nesta função, você pode, por exemplo, mudar o valor enviado pelo pino configurado no ``void setup()``. Para ligar ou desligar um pino. utiliza-se a função:

```arduino
digitalWrite(pino, estado);
  - pino: pino digital a ser configurado
  - estado: LOW para definir como desligado (0 volts) ou HIGH para definir como ligado (5 volts)

ex.: digitalWrite(13, HIGH); // pino 13, ligado (5V)
```

Por tratar-se de um pino digital, pode-se fazer uma analogia à lógica binária. O estado ``LOW`` representa o ``0`` e o estado ``HIGH`` representa o ``1``.

## Piscar LED

O Arduino possui um LED acoplado à porta 13. Isso significa que qualquer valor enviado ao pino 13 será repassado para o LED. Para acender este LED, pode-se utilizar o seguinte código:

```arduino
void setup () {
	pinMode(13, OUTPUT);
}

void loop () {
	digitalWrite(13, HIGH);
}
```

Esse código irá acender o LED ligado ao pino 13 e ele ficará ligado até que a placa seja desligada.

> Para enviar este código para a placa, selecione no menu a opção ``Sketch > Carregar (Upload)``. O código será enviado para a placa e o LED ficará aceso.

Para fazer o LED piscar, poderia-se utilizar as seguintes funções em conjunto no ``void loop()``:

```arduino
digitalWrite(13, HIGH);
digitalWrite(13, LOW);
```

O código faria o LED piscar, porém em uma velocidade tão rápida que seria impossível de ser visto ao olho humano. Para que a tarefa acima seja observável, deve-se colocar uma pausa entre as funções. Para isso, será utilizada a função:

```arduino
delay(tempo);
  - tempo: tempo da pausa em milissegundos

ex.: delay(1000); // pausa de 1 segundo
```

Assim, para fazer o LED piscar, pode-se utilizar o seguinte código:

```arduino
void setup () {
	pinMode(13, OUTPUT);
}

void loop () {
	digitalWrite(13, HIGH);
	delay(1000);
  digitalWrite(13, LOW);
	delay(1000);
}
```

Nesse código, o LED ficará aceso por 1 segundo e apagado por 1 segundo.

---

# Atividade #1

Usando os comandos acima, tente reproduzir a mensagem “SOS” em código morse utilizando o LED acoplado ao Arduino.

|S|O|S|
|---|---|---|
|• • •|─ ─ ─|• • •|

# Atividade #2

Crie um código que faça com que o LED acoplado pisque. Porém, o tempo que ele permanece desligado deve aumentar progressivamente.

|Ciclo|Tempo Ligado (ms)|Tempo Desligado (ms)|
|---|---|---|
|1º|250|250|
|2º|250|500|
|3º|250|750|
|4º|250|1000|
|5º|250|1250|
|...|...|...|

Lembrando que a linguagem de programação utilizada pela Arduino IDE compartilha várias funções em comum com a linguagem C++.
