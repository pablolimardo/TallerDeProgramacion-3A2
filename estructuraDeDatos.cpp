// Este es un mensaje de prueba para git
/*Esto es un bloque de comentario.
Todo lo que escribia entre los caracteres barra invertida - asterisco - asterisco - barra invertida conformará un bloque de comentario.
Este usa para la introducción del programa que estamos haciendo o un comentario que exceda el renglón */

// Esto es un comentario de una linea.

/*Lo primero que tenemos que incluir en un programa de c++ son las bibliotecas necesarias para nuestro proyecto. La que usaremos siempre por defecto es iostream. Para incorporar una biblioteca a nuestro proyecto, lo haremos con la palabra reservada #include y entre signos de mayor y menor, el nombre de la libreria que queremos incluir.*/

#include<iostream>

using namespace std;

int main(){
    /*
    Las variables son las estructuras de datos más pequeñas y se clasifican de la siguiente manera:

    int => números enteros
    float => números con decimales
    char => un sólo caracter
    string => cadena de caracteres
    bool => permite dos estados: true(verdadero) o flase(falso).

    Para crear la varible primero debo indicar el tipo, luego separado de un espacio le asigno un nombre que debe estar en minuscula, sin espacio y sin numero o simbolos. Luego, seguido del signo igual, asigno el valor a la variable y para terminar la linea inserto un punto y coma al final.
    */
   int anio = 2023;
   int dia;
   string nombreDelDia = "Domingo";
   float temperatura = 15.7;
   char iniciar = 'D';
    bool estadoDia = true;
    int hora;
    cout << "Ingresá la hora: ";
    cin >> hora;

    /*
    Condicional if
    Esta herramienta me permite analizar una condición y dependiendo si es verdadera o falsa, ejecutará diferentes códigos dependiendo el resultado de esta condición. Dicha condición se deberá pasar entre paréntesis y las líneas de código a ejecutarse, deberán estar contenidas entre llaves. Debe existir un bloque de llaves para la condición verdadera y otro para la falsa. El sino se diferencia con la palabra else. */
    
    if(hora >= 0 && hora <= 7 || hora >=21 && hora <=23){
        //Entre estas llaves va el bloque afirmativo
        cout << "Buenas noches" << endl;
    }else{
        //Entre estas llaves va el bloque negativo
        cout << "Buen dia!" << endl;
    }

    return 0; // Esta instrucción devuelve un 0 indicando al programa que se ejecturaron todas las lineas de código sin errores.
}