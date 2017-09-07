---
layout: default
---


# [**Aula #001**](https://italohdc.github.io/arduino-101/posts/arduino-001/)
  * Introdução ao ambiente Arduino IDE
  * Funções ``void setup()`` e ``void loop()``
  * Funções ``pinMode()``, ``digitalWrite()`` e ``delay()``
  * Piscar LED
  * Atividades ([Resoluções](https://github.com/italohdc/arduino-101/tree/master/Atividades/Arduino-001))

# [**Aula #002**](https://italohdc.github.io/arduino-101/posts/arduino-002/)
  * Declarar Comentários
  * Operadores Lógicos
  * IF / ELSE

<div class="posts">
  {% for post in site.posts %}
    {% if post.title = "Arduino #001" %}
    <article class="post">

      <h1><a href="{{ site.baseurl }}{{ post.url }}">{{ post.title }}</a></h1>

      <div class="entry">
        {{ content }}
      </div>

    </article>
  {% endfor %}
</div>
