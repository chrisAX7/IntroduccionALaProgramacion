Proceso Ejercicio04_MayorDeDosNumeros
	
	Definir num1, num2 Como Entero;
	
	Escribir "APP QUE MUESTRA CU�L N�MERO ES EL MAYOR DE DOS INGRESADOS";
	Escribir "Ingrese dos n�meros:";
	leer num1, num2;
	
	si num1 > num2 Entonces
		Escribir num1 , " es mayor";
	SiNo
		si num2 > num1 Entonces
			Escribir num2 , " es mayor";
		sino
			Escribir "Los dos son iguales";
		FinSi
	FinSi
	
FinProceso
