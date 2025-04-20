////Desarrolle un algoritmo que permita leer dos valores distintos, determinar cuál de los
////dos valores es el mayor y escribirlo.

Proceso Ejercicio02_DeterminarCualEsMayor
	
	Escribir "APP QUE COMPARA DOS NÚMEROS E INDICA CUÁL ES EL MAYOR";
	
	Definir num1, num2 Como Entero;
	
	Escribir "Ingrese un número:";
	leer num1;
	Escribir "Ingrese otro número:";
	leer num2;
	
	si num1 > num2 Entonces
		Escribir num1 , " es mayor que " , num2;
	SiNo
		si num1 < num2 Entonces
			Escribir num2 , " es mayor que " , num1;
		SiNo
			Escribir "Ambos son iguales";
		FinSi
	FinSi
FinProceso
