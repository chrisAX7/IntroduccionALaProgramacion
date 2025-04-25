////Hacer el diagrama de flujo para sumar dos números leídos por teclado y escribir el
////resultado

Proceso Ejercicio01_Suma
	
	Definir num1, num2, resultado Como Entero;
	
	Escribir "Ingrese el primer número:";
	leer num1;
	Escribir "Ingrese el segundo número:";
	leer num2;
	
	resultado <- num1 + num2;
	
	Escribir "El resultado de la suma es: " , resultado;
FinProceso
