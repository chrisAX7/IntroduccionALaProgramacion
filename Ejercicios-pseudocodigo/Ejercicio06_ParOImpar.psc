////Desarrolle un algoritmo que permita leer un valor cualquiera N y escriba si dicho
////número es par o impar.

Proceso Ejercicio06_ParOImpar
	
	Escribir "APP QUE INDICA SI UN NÚMERO ES PAR O IMPAR";
	Escribir "";
	
	Definir num Como Entero;
	
	Escribir "Ingrese un número:";
	leer num;
	
	si num % 2 == 0 Entonces
		Escribir num , " es par";
	SiNo
		si num == 0 Entonces
			Escribir "Es cero";
		SiNo
			Escribir num , " es impar";
		FinSi
	FinSi
	
FinProceso
