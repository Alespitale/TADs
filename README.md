# TADs

## TAD Contador:

Dentro de la carpeta TadCounter vas a encontrar los siguientes archivos:

● counter.h: Contiene la especificación del TAD Contador.

● counter.c: Contiene la implementación del TAD Contador.

● main.c: Contiene al programa principal que lee uno a uno los caracteres de un
archivo chequeando si los paréntesis están balanceados.

- Compilación:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c 99 -c counter.c
$ gcc -Wall -Werror -Wextra -pedantic -std=c 99 -o counter *.o main.c
```

- Ejecución:
```
$ ./counter input/<file>.in
```

Siendo <file> alguno de los nombres de archivo dentro de la carpeta input. Asegurate que para
aquellos archivos con paréntesis balanceados ejecutar el programa imprima en pantalla “Parentheses
match.” y para aquellos con paréntesis no balanceados imprima “Parentheses mismatch.”
  
## Tad Lista:
  
● main.c: Contiene al programa principal que lee los números de un archivo para ser cargados en
  nuestra lista y obtener el promedio.

● array_helpers.h: Contiene descripciones de funciones auxiliares para manipular arreglos.
  
● array_helpers.c : Contiene implementaciones de dichas funciones.
  
- Compilación:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c 99 -c list.c array_helpers.c
$ gcc -Wall -Werror -Wextra -pedantic -std=c 99 -o average *.o main.c
```

- Ejecución:
```
$ ./average input/<file>.in
```  
Siendo <file> alguno de los nombres de archivo dentro de la carpeta input. Asegurate que el valor de
los promedios que se imprimen en pantalla sean correctos y animate a definir tus propios casos de
input.  
