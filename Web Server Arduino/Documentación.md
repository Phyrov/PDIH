
# Web Server con Arduino
## Introducción
**Arduino es una plataforma de creación de electrónica de código abierto**, la cual está basada en hardware y software libre, flexible y fácil de utilizar para los creadores y desarrolladores. Esta plataforma permite crear diferentes tipos de microordenadores de una sola placa a los que la comunidad de creadores puede darles diferentes tipos de uso. [[1]](https://www.xataka.com/basics/que-arduino-como-funciona-que-puedes-hacer-uno)

## Herramientas 🔧
- Arduino MEGA
- Shield Ethernet: permite conectar nuestro Arduino UNO o Arduino MEGA a una red mediante un **cable  _ethernet_**

## Objetivo
Controlar nuestra placa Arduino MEGA a través de una página web gracias al módulo Shield Ethernet.
## Web 
Creamos una web sencilla que nos permite controlar una LED de nuestro Arduino. Previamente será necesario un login en dicha web.
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Login.jpg?raw=true)

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Logged.jpg?raw=true)

### Problema ⚠️
Cuando conectamos Arduino a internet, el servidor DHCP asigna una IP a nuestro dispositivo. El problema es que si esa IP cambia, dejará de funcionar.

Necesitamos:
-  Configurar el router para que no cambie la IP de nuestro Arduino.
- Abrir puertos del router para conectar con Arduino.
- Conseguir que no cambie la IP pública.

## Asignar IP y MAC
A pesar de que cada router tiene una configuración distinta, el método es el mismo. Es necesario indicarle al servidor DHCP que asigne una IP a una MAC (identificación del dispositivo dentro de la red). 

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Asignar%20IP%20y%20MAC%20a%20arduino.png?raw=true)

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Asignar%20IP%20y%20MAC%20a%20arduino%202.png?raw=true)
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Asignar%20IP%20y%20MAC%20a%20arduino%203.png?raw=true)

## Configuración de puertos
Para que Arduino pueda compartir y recibir información con el exterior, será necesario abrir un puerto.  Para ello, nos guiaremos por las palabras NAT,Virtual Server ó Port Forwarding.
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Abrir%20puertos%201.jpg?raw=true)

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Abrir%20puertos%202.jpg?raw=true)

![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Abrir%20puertos%203.jpg?raw=true)

## Conexión de Arduino con Shield Ethernet
La conexión del módulo Shield Ethernet depende del tipo de Arduino. Un ejemplo de conexión con el modelo UNO es la siguiente:
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/conexion.jpg?raw=true)

En nuestro caso la conexión al completo quedaría de la siguiente manera:
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/Completo.jpg?raw=true)

### Resultado final
![enter image description here](https://github.com/Phyrov/PDIH/blob/main/Web%20Server%20Arduino/img/VID_20220429_191544.gif?raw=true)

## Bibliografía  📚

[[1] Xataka,  Qué es Arduino, cómo funciona y qué puedes hacer con uno](https://www.xataka.com/basics/que-arduino-como-funciona-que-puedes-hacer-uno)


# Autores ✒️

* **Francisco Lara Marín**
* **Álvaro Marín Pérez**
