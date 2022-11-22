# Multiprocesadores Proyceto Final
Proyecto Final de Multiprocesadores en donde se comparará algunos códigos probados previamente en nuestro equipo de computo contra un servidor en la nube. En este caso sera un servidor en la nube de google.

## Introducción
En este repositorio se pondrán a prueba diversos códigos con el proposito de hacer una comparación de tiempos de ejecución en nuestro equipo de computo y un servidor en la nube. Como ya se había mencionado previamente el servidor escogido es el servidor de Google el cual mostraremos como se configurara para futuros trabajos. Hay que destacar que con las caracteristicas que se mencionará tuvo un costo de $55.00 pesos aproximadamente no obstante Google nos otorga $300.00 pesos para hacer varios servidores. El costo dependera de las caracteristicas que le otorguemos como la RAM, almacenamiento, Sistema Operativo entre otras cosas.

## Pasos para crear un servidor en la nube
A continuación se mostraran los pasos para crear nuestro servidor.
Google Cloud - Google Cloud Storage
https://cloud.google.com/google/cloudstorage
Configuración
Sistema operativo: Ubuntu 18.04
Servidor: America del Norte
RAM:  8 GB
ROM: 15 GB

[![Captura-de-pantalla-11.png](https://i.postimg.cc/1zVZywq8/Captura-de-pantalla-11.png)](https://postimg.cc/QBDzbBSD)
[![Captura-de-pantalla-12.png](https://i.postimg.cc/50wdCJp1/Captura-de-pantalla-12.png)](https://postimg.cc/cg45pVV5)
[![Captura-de-pantalla-13.png](https://i.postimg.cc/NMhvFF6p/Captura-de-pantalla-13.png)](https://postimg.cc/cKcb5s5n)
[![Captura-de-pantalla-14.png](https://i.postimg.cc/FzNtb6nS/Captura-de-pantalla-14.png)](https://postimg.cc/jwgktMTq)
[![Captura-de-pantalla-15.png](https://i.postimg.cc/NfzCL9cm/Captura-de-pantalla-15.png)](https://postimg.cc/rK5NPpzw)
[![Captura-de-pantalla-16.png](https://i.postimg.cc/zGHthzzM/Captura-de-pantalla-16.png)](https://postimg.cc/68wfJNGL)
[![Captura-de-pantalla-17.png](https://i.postimg.cc/6QsHLkTQ/Captura-de-pantalla-17.png)](https://postimg.cc/PC4zdFWG)
[![Captura-de-pantalla-18.png](https://i.postimg.cc/9fGLxLqY/Captura-de-pantalla-18.png)](https://postimg.cc/67pVqLc8)
[![Captura-de-pantalla-19.png](https://i.postimg.cc/76wmjS38/Captura-de-pantalla-19.png)](https://postimg.cc/VSZqCrZD)
[![Captura-de-pantalla-20.png](https://i.postimg.cc/nrw2s56p/Captura-de-pantalla-20.png)](https://postimg.cc/1Vww2Wmj)
[![Captura-de-pantalla-21.png](https://i.postimg.cc/D0z5wFpx/Captura-de-pantalla-21.png)](https://postimg.cc/r0v5h6k4)
[![Captura-de-pantalla-22.png](https://i.postimg.cc/cHhXW6hK/Captura-de-pantalla-22.png)](https://postimg.cc/MMcyb6hx)

## Códigos
Para la sección de códigos se harán diversas pruebas con diferentes códigos para tomar el tiempo de ejecución de este. Todos los códigos se anexarán en una carpeta.

### Comparacion de Actividad 1.3
En este código lo que hacemos es generar "multiples acciones" con el fin de saber que thread fue el que nos respondio primero y en que orden fueron tomados. Se utilizaron 18 threads para realizar esats opereciones.
[![Captura-de-pantalla-23.png](https://i.postimg.cc/TYtSvN1d/Captura-de-pantalla-23.png)](https://postimg.cc/F7JGjZ08)
Tiempo de ejecución en LapTop:    0.004171

Tiempo de ejecución en servidor:  0.001198

### Comparacion de Actividad 1.4
En este código lo que se busca es que por medio de la formula de euler calcular el valor de PI sin la necesidad de utilizar la libreria de Math y así mismo saber cuando tiempo ha tardado en hacer el proceso del calculo. Para este caso el valor de PI deoende de los Threads, a mayor número mayor presición.
[![Captura-de-pantalla-24.png](https://i.postimg.cc/VkjCbpt1/Captura-de-pantalla-24.png)](https://postimg.cc/sMgXknK0)
Tiempo de ejecución en LapTop:    2.001725

Tiempo de ejecución en servidor:  8.456709

### Comparacion de Actividad 1.5
Para este código realizaremos dos actividades un programa se encargara de realizar los procesos utilizando la memoria RAM y otro utilizara el disco duro. Cada programa utilizará 6 threads para hacer los procesos y un valor de 10000000 para calcular los valores de euler. Cada programa guardará los valores para poder ibservar que tan preciso son los resutlados.

###RAM
[![Captura-de-pantalla-25.png](https://i.postimg.cc/RV28Xs0N/Captura-de-pantalla-25.png)](https://postimg.cc/QHk0Mq13)
Tiempo de ejecución en LapTop:    0.003639

Tiempo de ejecución en servidor:  0.013663
### Disco Duro
[![Captura-de-pantalla-26.png](https://i.postimg.cc/L64fG2nW/Captura-de-pantalla-26.png)](https://postimg.cc/Lh7n1dkk)
Tiempo de ejecución en LapTop:     7.701824

Tiempo de ejecución en servidor:  30.972593

### Comparacion de Actividad 2.1
En este programaP
ara este código tomaremos una imagen en formato ".bmp" y lo que realizara sera hacer el cambio a escala de grises de esta imagen.
[![Captura-de-pantalla-26.png](https://i.postimg.cc/L64fG2nW/Captura-de-pantalla-26.png)](https://postimg.cc/Lh7n1dkk)
Tiempo de ejecución en LapTop:    0.013619

Tiempo de ejecución en servidor:  0.003784

### Imagen
[![imag.png](https://i.postimg.cc/rp1gS4gH/imag.png)](https://postimg.cc/Jyhb8Gf3)
[![img2-dd.png](https://i.postimg.cc/76q9XLWZ/img2-dd.png)](https://postimg.cc/NyPRjQt3)

### Comparacion de Actividad 2.2 (blurring)
Para este código realiza algo similar al anterior solo que este se encargará de hacer un bluring(haecrla borrosa) a la imagen u cambiar la orientacion de la imagen.
[![Captura-de-pantalla-27.png](https://i.postimg.cc/7606Pg1K/Captura-de-pantalla-27.png)](https://postimg.cc/mzZR8159)
Tiempo de ejecución en LapTop:    0.122460

Tiempo de ejecución en servidor:  0.087720
## Imagen
[![ima.png](https://i.postimg.cc/zf37Qfwz/ima.png)](https://postimg.cc/R35w64by)
[![gtr35-HD-bmp-out-9x9.png](https://i.postimg.cc/fR855d9q/gtr35-HD-bmp-out-9x9.png)](https://postimg.cc/0zJpybZ7)

## Conclusiones
Como se puede observar en algunos de los códigos una diferiencia significativa. En algunos casos los tiempos de ejecución del equipo de computo es menor a del servidor. Esto probablemente se deba a que había más aplicaciones ejecutandose al momento de correr los programas. Así mismo, podemos bservar que en la mayoria los códigos corridos en la LapTop tiene una mejor respuesta esto es lo esperado ya que al ser la nube un servicio y el trafico es mayor.
