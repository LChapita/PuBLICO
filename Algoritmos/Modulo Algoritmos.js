

/*1. Pide un número por teclado e indica si es un número primo o no. Un número primo es
aquel que solo puede dividirse entre 1 y sí mismo. Por ejemplo: 25 no es primo, ya que
25 es divisible entre 5, sin embargo, 17 si es primo.
 */
///num = prompt("Ingresa un numero wachin : ");


function esPrimo(num) {
    for (var i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    };
    return true;
}

function mostrar() {
    
    let num = document.querySelector("#numero").value;
    
    boolean = esPrimo(num);
    if (boolean == true) {
        alert("Este es primo");
    } else {
        alert("Este No es primo");
    }
}

function prueba() {
    alert("macaco");
}
/*2. Escribe una aplicación que solicite al usuario que ingrese una contraseña cualquiera.
    Después se le pedirá que ingrese nuevamente la contraseña, con 3 intentos. 
    Cuando acierte ya no pedirá más la contraseña y mostrará un mensaje diciendo “Felicitaciones, recordás tu contraseña”. 
    Si falla luego de 3 intentos se mostrará el mensaje “Tenes que ejercitar la memoria”. 
    Los mensajes quedarán en pantalla a la espera que el usuario presione una tecla, luego de esto se cerrará el programa.
*/
function passwordsEj2() {
    var passw = document.querySelector("#pass").value;
    

}





/*3. Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el
nombre del empleado, la antigüedad y la cantidad de horas trabajadas en el mes. Se
pide calcular el importe a cobrar teniendo en cuenta que al total que resulta de
multiplicar el valor hora por la cantidad de horas trabajadas. Además, si el empleado
tiene más de 10 años de antigüedad hay que sumarle la cantidad de años trabajados
multiplicados por $30. Imprimir en pantalla el nombre, la antigüedad y el total a cobrar.
 */

/* 
4. Generar un número aleatorio comprendido entre 0 y 1000. Pedir, a continuación, al
usuario adivinar el número escogido por el ordenador. Para ello, debe introducir un
número comprendido entre 0 y 1000. Se compara el número introducido con el
calculado por el ordenador y se muestra en la consola "es mayor" o "es menor" en
función del caso. Se repite la operación hasta que el usuario encuentra el número.
5. Pedir al usuario que ingrese un número repetidamente hasta que ingrese un -1 y en ese
caso se terminará el programa.
Al terminar, mostrará lo siguiente:
a. – mayor número introducido
b. – menor número introducido
c. – suma de todos los números
d. – suma de los números*/