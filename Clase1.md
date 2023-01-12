# Presentación e introducción

## Contenido

INTRODUCCIÓN A LA PROGRAMACIÓN PROGRAMACIÓN PROCEDIMENTAL Y ESTRUCTURADAARRAYS Y ESTRUCTURASARCHIVOSFUNCIONES Y MÓDULOS, LISTAS Y PILAS

---

## Normativa

* Evitar llegar tarde a clases.
* No hablar en el celular en clase, mantener en modo de silencio
* Evitar comer alimentos en clase.
* No distraerse en la computadora en actividades ajenas a la clase.
* No entregar tareas, deberes, laboratorios, ni proyectos atrasados.
* Se tomará en cuenta la participación en clase.
* Subir las tareas a la plataforma virtual (o por correo).
* Pruebas teóricas en plataforma virtual (o escritas).* Se tomará en cuenta la participación de eventos académicos que organice la Facultad de Sistemas.

## Código de ética EPN

La tradición y el prestigio de la **Politécnica exigen** que el comportamiento de sus miembros se encuadre en el respeto mutuo, la honestidad, el apego a la verdad y el compromiso con la institución. Con tal antecedente, el presente Código de Ética define la norma de conducta de los miembros de la Escuela **Politécnica Nacional**:

### Respeto hacia sí mismo y hacia los demás

* Fomentar la solidaridad entre los miembros de la comunidad.
* Comportarse de manera recta, que afirme la autoestima y contribuya al prestigio institucional, que sea ejemplo y referente para los demás.
* Respetar a los demás y en particular la honra ajena y rechazar todo tipo de acusaciones o denuncias infundadas.
* Respetar el pensamiento, visión y criterio ajenos.
* Excluir toda forma de violencia y actitudes discriminatorias.
* Apoyar un ambiente pluralista y respetuoso de las diferencias.
* Convertir la puntualidad en norma de conducta.
* Evitar el consumo de bebidas alcohólicas, tabaco, substancias psicotrópicas o estupefacientes.

# GitHub, Git, vs code, markdown, compilador de c y c++ IDE de desarrollo con C y C++

## Shortcuts VS code

1. Comand pallete: **Windows**: CTRL + SHIFT + P
2. Quick open: **Windows:** CTRL + P
3. Toggle sidebar: **Windows**: CTRL + B
4. Multi select cursor: **windows**: CTRL + D
5. Copy line: **Windows**: SHIFT + ALT + UP or SHIFT + ALT + DOWN
6. Comment code block **windows**: SHIFT + ALT + A (multy-line comment), CTRL + C + K (Single-line comment)
7. Go back/ move forward: **Windows**: ALT + --> OR + ->
8. Show all symbols: **windows**: CTRL + T
9. Trigger suggestion and trigger parameter hints: **Windows**: CTRL + SPACE, CTRL + SHIFT + SPACE

## GIT

Git fue creadoen 2005 por el mismo Linus Torvalds (el creador de Linux)como herramienta para facilitar el desarrollo colaborativode software. Desde entonces han surgido incluso populares plataformas,como GitHub o GitLab, que permiten su uso online.

$ git–versión

### Tu Identidad

* $gitconfig--global user.name "Emma Paris“
* $ gitconfig--global user.emailjohndoe@example.com

### Verificando

* $ gitconfiguser.name$ gitconfiguser.email

### inicio del control de versiones

* $ gitinit
* $ gitstatus
* $ gitadd.
* $ gitadd NombreCarpeta/NombreArchivo
* $ gitcommit-m 'mensaje :initialprojectversion'

### inicio del control de versiones -clonando

* $ gitclone https://github.com/xxyyy/abc
* $ gitclone https://github.com/xxyyy/abcmiPropioNombre

### Quitar archivos del control

* $echonombreArchivo.ext>>.gitignore
* $echo*.txt>>.gitignore

### Ver archivos ignorados

* $ cat.gitignore

### Forzar agregar archivo excluido

* $gitadd-fNombreArchivo.log.

# Introducción a la programación
El workspace es un directorio donde se guarda toda la información respecto de los proyectos que sedesarrollen y suele verse de este modo: c:\Chello\EPN\programacion

Personalizaión

Comandos vs codeComandos windows

## Variables

## Palabras reservadas

El lenguaje C posee un número reducido de palabras reservadas (tan solo 32)
que define el standard ANSI-C. Estas palabras reservadas pueden verse en la tabla
siguiente:

![Tabla de palabras reservadas](assets/images/http://uia-programacion1.weebly.com/uploads/5/4/6/5/54653763/_3704320_orig.jpg)

Algunos ejemplos de variables de C serían:
* float a;
* int b,c;
* char caracter,otro_caracter;

## __7. Características del lenguaje C.__
+ Estructura de C - Lenguaje estructurado.

+ Programación de nivel medio (beneficiándose de las ventajas de la programación de alto y bajo nivel).

+ No depende del hardware, por lo que se puede migrar a otros sistemas.

+ Objetivos generales. No es un lenguaje para una tarea específica, pudiendo programar tanto un sistema operativo, una hoja de cálculo o un juego.

+ Ofrece un control absoluto de todo lo que sucede en el ordenador.

+ Organización del trabajo con total libertad.

+ Los programas son producidos de forma rápida y son bastante potentes.

+ Rico en tipo de datos, operadores y variables en C.

___
## __8. Sintaxis en C.__
La sintaxis en C es una serie de reglas y procesos que lideran la estructura de un programa. 

El comienzo de todo programa en este lenguaje debe comenzar por #include cuya función es inicializar el entorno de trabajo; en este ejemplo, vinculando el archivo stdio.h (biblioteca de C) que contiene varias funciones.

### Función principal.
La función principal representada como __int main()__ va al principio de todo programa la cual hace que el programa vuelva a ese punto de retorno tras ejecutarse y su orden está delimitada entre { }.


### Funciones importantes de la biblioteca <stdio.h>
_printf_

_Se_

_getchar_

_fflush_

_scanf_

_sscanf_

___

## __9. Bibliotecas de C.__
Las bibliotecas o librerias son usadas en este lenguaje de programación y están formadas por una serie de código con el que podemos leer el teclado, realizar operaciones o imprimir en pantalla.

### Librerias mas destacadas.

_stdio.h_: De entrada y salidad.

_conio.h_: Potente gestión de textos.

_math.h_: Para realizar operaciones matemáticas.

_time.h_: Obtener fecha y hora actual.

___
## __10. Variables - palabras reservadas.__
una variable es un lugar donde se puede almacenar temporalmente un dato. En C las variables tienen un nombre que las identifica, y sirve para hacer referencia a ellas. También tienen un tipo, que es el __tipo de datos__ que puede almacenar. El valor de las variables es, como su propio nombre indica, variable

+ Las variables pueden ser locales o globales dependiendo de lo que se necesite.

## __11. Tipos de datos.__
+ A simboliza el nombre de la variable.

_Entero_: int A;

_Entero corto_: abreviatura int A;

_Entero largo_: Long int A;

_Real_: flotador A;

_Real doble_: doble A;

_Carácter_: char A;

## __12. Formato para las variables__

__%c__ == Un carácter.

__%d__ == Real o entero.

__%i__ == Entero.

__%f__: == Real.

__%g__: == Real.

__%s__ == Cadena.

__%%__ == porcentaje de imprime

EJEMPLO:

~~~
#include <stdio.h>
int main(){
    int edad;
        printf("%i Coloca tu edad: ", edad);
        scanf("%i", &edad);
 devolver 0;
}
~~~
___
## __13. Algoritmos - Algoritmia.__
En matemáticas, lógica, ciencias de la computación y disciplinas relacionadas, un algoritmo ? es un conjunto de instrucciones o reglas definidas y no-ambiguas, ordenadas y finitas que permite, típicamente, solucionar un problema.

Los algoritmos estan conformados por: 

<PROBLEMA - SOLUCIÓN>

_________1. Pseudocódigo

Descripción de alto nivel compacta e informal? del principio operativo de un programa informático u otro algoritmo.

_________2. Diagrama de flujo

Representación gráfica de un algoritmo o proceso.

_________3. Codificiación

Almacenar y recuperar información.

_________4. Trace(seguimiento)

Informe de los elementos activos en la pila de ejecución en un momento determinado durante la ejecución de un programa.
___
## __14. Procedimientos.__
Un procedimiento es un fragmento de código cuya función es la de realizar una tarea específica independientemente del programa en el que se encuentre.

Sintaxis de los procedimientos: 

+ void "Nombre"()

{

}

## __15. Operadores.__
+ ### OPERADOR DE ASIGNACIÓN.

Asignación: (=)

+ ### OPERADORES ARITMÉTICOS.

Suma: (+)

Resta: (-)

Multiplicación: (*)

Cociente: (/)

+ ### OPERADORES RACIONALES.
Alcalde: (>)

Mayor o igual: (>=)

Menor: (<)

Menor o igual: (<=)

Igual: (==)

Diferente: (!=)

+ ### OPERADORES LÓGICOS.
Y,y,conjunción: (&&)

Or,o,disyunción: (||)

No, no, negación: (!)

___
## __16. Controles de flujo.__
El término control de flujo se utiliza para describir el método en el que un dispositivo serie controla la cantidad de datos que se transmiten al mismo tiempo.

+ La sentencia __if__

+ El bucle __while__

+ El bucle __do - while__

+ El bucle __for__

+ Las sentencias __break y continue__

+ La selección multiple __switch__

Son algunos de los controles de flujo que tengo que usar.

___
## __17. Arreglo.__
Los arrays son variables estructuradas, donde cada elemento se almacena de forma consecutiva en memoria. Las cadenas de caracteres son declaradas en C como arrays de caracteres y permiten la utilización de un cierto número de notaciones y de funciones especiales.

## __18. Arrays en una dimensión.__
Un array (unidimensional, también denominado vector) es una variable estructurada
formada de un número "n" de variables simples del mismo tipo que son denominadas
los componentes o elementos del array.

### FORMATO PARA DECLAR UN ARRAY UNIDIMENSIONAL:

tipo nombre[n];

donde: n >= 1

Para acceder a un elemento del array:

nombre[i];

donde: 0 <= i < n

Por ejemplo, la declaración:

int A[4];

define un array de tipo entero de dimensión 4. Y ya podríamos acceder al primer
componente del array por medio de: A[0], al segundo elemento por: A[1] y al último
elemento por A[3]. 

## __19. Arrays de dos dimensiones.__
Los arrays de dos dimensiones también conocidos como matrices.

int nombre[f][c] ;

Donde: F,C... >= 1;

Para acceder a un elemento del array multidimensional:

nombre[i][j];

donde: 0 <= i < f ; 0 <= j < c;
2

Durante la declaración de un array multidimensional también podemos inicializar sus
componentes indicando la lista de los valores entre llaves. En el interior de la lista, los
componentes de cada línea del array son encerrados nuevamente entre llaves. Para hacer
más cara la visibilidad de los elementos del array, podemos indicarlos en varias líneas.

int A[3][4] =

{{ 0,1,2,3},

 { 1,2,3,4},

 { 2,3,4,5}}; 

## __20. Cadena de caracteres.__

Una cadena en C es un array de caracteres de una dimensión (vector de caracteres) que
termina con el carácter especial \0 (cero). 

El formato para declarar una cadena es:

char nombre[n];

donde: n >= 1 y representa a la longitud-1 real de la cadena.

Un ejemplo de declaración de cadena:

char cadena [5];

Debido a que en la representación interna de una cadena de caracteres es terminada por
el símbolo '\0', para un texto de "n" caracteres, debemos reservar "n+1. El carácter '\0',
Aunque pertenece a la cadena, no aparece al utilizar funciones como printf.

En el caso especial de los arrays de caracteres, podemos utilizar varias formas de
inicialización:

char cadena[] = "Hola";

char cadena[] = {'H','o','l','a',0};

char cadena[] = {'H','o','l','a','\0'};

sin especificar el tamaño de la cadena, o especificando el tamaño:

char cadena[5] = "Hola";

char cadena[5] = {'H','o','l','a',0};

char cadena[5] = {'H','o','l','a','\0'};

__*EJEMPLO DE UN EJERCICIO QUE USA UNA MATRIZ*__
~~~
#include <stdio.h>
 Isaac Proaño
Matrices de deber
void InicialNombre()
{
   
    char mc [7] [7] = {
                         {'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}
                        ,{'*', '*', '*', '*', '*', '*', '*'}              
                     };
                     
    int fila = sizeof(mc)/sizeof(mc[0]);
    int columna = sizeof(mc[0])/sizeof(mc[0][0]);
    
         printf("Primera letra del nombre \n\n");
 
for( fila = 1; fila <= 7; fila++) //-----> W
    {
        for (columna = 1; columna <= 5; columna++)
 if ((fila == 1 && columna > 1 && columna < 5 ) || (fila == 7 & columna > 1 & & columna < 5 ) || (columna == 3))
                printf (" + ",columna);
 más
                printf("   ");
        printf("\n");
    }
}
int main ()
{
    InicialNombre();
}
~~~
___
## __21. Enumeradores.__

+ #define VTAB'\013'
+ define BELL'\007'
+ define ENTRAR'\n'
+ definir ALERT'\a'

## __22. Expresiones.__
+ \a caracter de alarma 
+ \b retroceso
+ \f avance de hoja
+ \n nueva línea
+ \r retorno de carro
+ \t tabulador horizontal
+ \v tabulador vertical

## __23. Nuevas funciones.__

______strindex(línea, patrón);

______int i=atoi(línea);

______char línea[]="123";

## 24. Funciones interesantes para manejar caracteres.
No sólo __string.h__ contiene funciones utiles para manejar cadenas de caracteres. En __ctype.h__ que sirve para hacer varias preguntas acerca de los caracteres.

+ isalnum(carácter): Devuelve un entero.

+ isalpha(carácter): devuelve __cierto__ si carácter es una letra, caso contrario __falso__.

+ isdigit(carácter): Devuelve cierto si carácter es un __digito__.

+ isupper(carácter): Devuelve __cierto__ si carácter es una letra minuscula. 
___
# __25. Introducción a C++.__
C++ es un lenguaje de programación que proviene de la extensión del lenguaje C para que pudiese manipular objetos. A pesar de ser un lenguaje con muchos años, su gran potencia lo convierte en uno de los lenguajes de programación más demandados.
~~~
#include <iostream>
utilizando el espacio de nombres std;
int main(){
 cout<<"¡Hola mundo...!";
 devolver 0;
}
~~~

[Programación en c++] (https://www.youtube.com/watch?v=dJzLmjSJc2c&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh)
___
## __26. Características de C++.__
_Compatibilidad con bibliotecas_: A través de bibliotecas hay muchas funciones que están disponible y que ayudan a escribir código rápidamente.

_Orientado a Objetos:_ El foco de la programación está en los objetos y la manipulación y configuración de sus distintos parámetros o propiedades.

_Rapidez:_ La compilación y ejecución de un programa en C++ es mucho más rápida que en la mayoría de lenguajes de programación.

_Compilación:_ En C++ es necesario compilar el código de bajo nivel antes de ejecutarse, algo que no ocurre en otros lenguajes.

_Punteros:_ Los punteros del lenguaje C, también están disponibles en C++.

_Didáctico:_ Aprendiendo programación en C++ luego es mucho más fácil aprender lenguajes como Java, C#, PHP, Javascript, etc.
___
## __27. Sintaxis de C++.__
De la misma manera que en C, en C++ se debe iniciar con __#include__ mas la libreria estandar de c++ que es el __<"iostream">__ 

+ Los archivos que se creen en un proyecto de C++ deben terminar con .cpp

+ El equivalente al __printf__ viene a ser el __cout<<__

+ El equivalente al __scanf__ es el __cin>>__

+ Para ahorrarme trabajo debo poner el (using namespace std;) antes de empezar con el programa. 
## __28. Bibliotecas de C++.__
+ iostream.h == Biblioteca principal.

+ string.h == Crear y manipular facilmente cadenas.

+ CMATH == Operaciones matemáticas.

+ fstream.h == Operaciones de lectura y escritura de archivos.

___
## __29. Archivo.__
Los archivos o ficheros son la forma en la que C++ permite el acceso al disco. Todos los procesos tienen abiertos, por defecto, los archivos 0(entrada), 1(salida) y 2(salida de errores), de manera que en C++ se corresponden con los objetos cin, cout y cerr.


## __30. Archivos.__

### LECTURA Y ESCRITURA DE ARCHIVOS.

~~~
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include<fstream>
utilizando el espacio de nombres std;
void escribirArchivo();
void lecturaArchivo();
int main(){
 escribirArchivo();
	lecturaArchivo();
 sistema("pausa");
 devolver 0;
} 
void escribirArchivo(){
	ofstream escribirArchivo;
 string nombreArchivo,frase; funcion para poder colocar el nombre que quiero que se cree el archivo y la frase
	char rpt;
	
	cout<<"Digite el nombre del archivo: ";
 getline(cin,nombreArchivo); guardar e indicar donde guardarse
	
 escribirArchivo.open(nombreArchivo.c_str(),ios::out); Creamos el archivo
	
	if(escribirArchivo.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo abrir el archivo";
 salida(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,frase);
		escribirArchivo<<frase<<endl;
		
		cout<<"\nDesea agregar otra frase(S/N): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
 escribirArchivo.close(); Cerramos el archivo
}
void lecturaArchivo(){
	ifstream leerArchivo;
 texto de cadena;
 leerArchivo.open("fichero.txt",ios::in); abrimos el archivo en modo lectura
	if(leerArchivo.fail()){
		cout<<"no se pudo abrir el archivo";
 salida(1);
	}
	while(!leerArchivo.eof()){ // mientras no sea el final del archivo 
		getline(leerArchivo,texto);
		cout<<texto<<endl;
	}
leerArchivo.close(); cerramos el archivo
}