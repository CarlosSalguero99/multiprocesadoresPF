# Multiprocesadores Proyceto Final
Proyecto Final de Multiprocesadores en donde se comparará algunos códigos probados previamente en nuestro equipo de computo contra un servidor en la nube. En este caso sera un servidor en la nube de google.

## Introducción
En este repositorio se pondrán a prueba diversos códigos con el proposito de hacer una comparación de tiempos de ejecución en nuestro equipo de computo y un servidor en la nube. Como ya se había mencionado previamente el servidor escogido es el servidor de Google el cual mostraremos como se configurara para futuros trabajos. Hay que destacar que con las caracteristicas que se mencionará tuvo un costo de $55.00 pesos aproximadamente no obstante Google nos otorga $300.00 pesos para hacer varios servidores. El costo dependera de las caracteristicas que le otorguemos como la RAM, almacenamiento, Sistema Operativo entre otras cosas.

## Pasos para crear un servidor en la nube
A continuación se mostraran los pasos para crear nuestro servidor.
Google Cloud - Google Cloud Storage
https://cloud.google.com/google/cloudstorage

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
Para la sección de códigos se harán diversas pruebas con diferentes códigos para tomar el tiempo de ejecución de este.

### Comparacion de Actividad 1.3
En este código otorgaremos diversas tareas para ver como reacciona los threads y en que orden los toma. Se utilizaron 18 para este problema.
[![Captura-de-pantalla-23.png](https://i.postimg.cc/TYtSvN1d/Captura-de-pantalla-23.png)](https://postimg.cc/F7JGjZ08)
Tiempo de ejecución en LapTop:   0.004171

Tiempo de ejecución en servidor:  0.001198

### Comparacion de Actividad 1.4
Para esta parte realizara el priceso de calcular el valor de PI sin la libreria "MATH" y asignandole 5827 threads.
[![Captura-de-pantalla-24.png](https://i.postimg.cc/VkjCbpt1/Captura-de-pantalla-24.png)](https://postimg.cc/sMgXknK0)
Tiempo de ejecución en LapTop:   2.001725

Tiempo de ejecución en servidor:  8.456709

### Comparacion de Actividad 1.5
Para esta actividad realizamos dos problemas, uno que mencione el tiempo de ejecucuion que se ocuparia en el Disco Duro y otro que se tomaria en la RAM. Para ambos casos se utilizaron 6 threads y ambos se encargaran de carcular los valores de euler 10000000 veces.

[![Captura-de-pantalla-25.png](https://i.postimg.cc/RV28Xs0N/Captura-de-pantalla-25.png)](https://postimg.cc/QHk0Mq13)
Tiempo de ejecución en LapTop:   0.003639

Tiempo de ejecución en servidor:  0.013663

[![Captura-de-pantalla-26.png](https://i.postimg.cc/L64fG2nW/Captura-de-pantalla-26.png)](https://postimg.cc/Lh7n1dkk)
Tiempo de ejecución en LapTop:   7.701824

Tiempo de ejecución en servidor:  30.972593

### Comparacion de Actividad 2.1
Para este código tomaremos una imagen en formato ".bmp" y lo que realizara sera hacer el cambio a escala de grises de esta imagen.
[![Captura-de-pantalla-26.png](https://i.postimg.cc/L64fG2nW/Captura-de-pantalla-26.png)](https://postimg.cc/Lh7n1dkk)
Tiempo de ejecución en LapTop:   0.013619

Tiempo de ejecución en servidor:  0.003784

### Imagen
[![imag.png](https://i.postimg.cc/rp1gS4gH/imag.png)](https://postimg.cc/Jyhb8Gf3)
[![img2-dd.png](https://i.postimg.cc/76q9XLWZ/img2-dd.png)](https://postimg.cc/NyPRjQt3)

### Comparacion de Actividad 2.2 (blurring)
[![Captura-de-pantalla-25.png](https://i.postimg.cc/RV28Xs0N/Captura-de-pantalla-25.png)](https://postimg.cc/QHk0Mq13)
Tiempo de ejecución en LapTop:   0.003639

Tiempo de ejecución en servidor:  0.013663

## Conclusiones


