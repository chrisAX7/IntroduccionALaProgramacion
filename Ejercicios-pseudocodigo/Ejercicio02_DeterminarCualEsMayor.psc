////Desarrolle un algoritmo que permita leer dos valores distintos, determinar cu�l de los
////dos valores es el mayor y escribirlo.

Proceso Ejercicio02_DeterminarCualEsMayor
	
	Escribir "APP QUE COMPARA DOS N�MEROS E INDICA CU�L ES EL MAYOR";
	
	Definir num1, num2 Como Entero;
	
	Escribir "Ingrese un n�mero:";
	leer num1;
	Escribir "Ingrese otro n�mero:";
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
