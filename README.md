# Proyecto-Compresion
Proyecto de compresión de archivos de texto. Editor de texto. C++. Sistemas Operativos

<hr>

### ¿Cómo la compresión basada en diccionario optimiza el uso del espacio de almacenamiento en sistemas de archivos?

Lo optimiza almacenando cadenas ya leídas con códigos más cortos. De esta manera elimina redundancias almacenando patrones repetitivos dentro de una estructura de datos (diccionario), almacenando los patrones encontrados de la forma {código: cadena/patrón}

<hr>

### ¿Qué criterios se deben considerar al seleccionar un método de compresión de diccionario para su uso en aplicaciones de sistema?

La repetición de caracteres y patrones dentro del texto a comprimir, ya que el algoritmo de compresión se basa en la repetición de patrones para almacenar los patrones encontrados con códigos o identificadores más cortos que el patrón.

<hr>

### ¿Cuál es el impacto de la compresión de diccionario en el rendimiento del sistema durante las operaciones de lectura y escritura de archivos?

Leve aumento en el uso de memoria y CPU.

<hr>

### ¿Cómo se pueden manejar los errores y la integridad de datos en sistemas que utilizan compresión de diccionario?

Se pueden implementar diferentes algoritmos de detección de errores. Por ejemplo, se podrían realizar checksums antes y después de la compresión para asegurar que el proceso de compresión haya sido exitoso.

<hr>

### ¿Cuáles son las ventajas y desventajas de utilizar compresión de diccionario en términos de consumo de recursos del sistema y respuesta del sistema?


La ventaja más grande es el significativo ahorro de espacio de almacenamiento. 

La única desventaja sería el aumento de uso de CPU y memoria para implementaciones (más notable para implementaciones concurrentes)-