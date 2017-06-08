# Arduino #002

Como havia sido dito no tópico anterior, a linguagem de programação utilizada pela Arduino IDE compartilha várias funções em comum com a linguagem C++. Neste tópico, serão apresentadas algumas funções que o Arduino possui em comum com o C++.

Caso você já tenha alguma familiaridade com a linguagem C++, você pode pular para o [próximo tópico](https://github.com/italohdc/arduino-101/blob/master/Arduino-003.md).

## Declarar Comentários

Você deve ter percebido que nos códigos de exemplo algumas explicações do funcionamento da função eram colocados após o operador ``//``. O operador ``//`` é utilizado para declarar comentários em uma única linha (isto é, todo o texto que estiver posicionado após o operador não será interpretado pelo compilador).

```arduino
  digitalWrite(13, HIGH);   // Este trecho do código não será executado
  delay(1000);
```

Caso você deseje criar um comentário de várias linhas, você pode utilizar os operadores ``/*`` e ``*/`` indicando, respectivamente, o início e o fim do comentário.

```arduino
  digitalWrite(13, HIGH);
  
  /* Este trecho
  de código não
  será executado */
  
  delay(1000);
```

## Operadores Lógicos

Os principais operadores lógicos:

```python
a == b    Igualdade
          10 == 10   True
          10 == 20   False

a != b    Diferença
          10 != 10   False
          10 != 20   True

a > b     Maior que
          10 > 10    False
          20 > 30    False
          30 > 20    True

a => b    Maior ou igual a
          10 >= 10   True
          20 >= 30   False
          30 >= 20   True

a < b     Menor que
          10 < 10    False
          20 < 30    True
          30 < 20    False

a <= b    Menor ou igual a
          10 <= 10   True
          20 <= 30   True
          30 <= 20   False
```

Além disso, temos os operadores

```js
a && b    AND (E)
          False && False   False
          False && True    False
          True  && False   False
          True  && True    True

a || b    OR  (OU)
          False && False   False
          False && True    True
          True  && False   True
          True  && True    True
```

|Operador|Represetação|
|---|---|
|Igualdade|a == b|
|Diferença|a != b|
|Maior que|a > b|
|Menor que|a < b|
|Maior ou igual|a >= b|
|Menor ou igual|a <= b|
|Menor que|a < b|
|Menor que|a < b|

|Igualdade|==|
|---|---|
|20 == 20|true|
|20 == 10|false|
