////Determinar la hipotenusa de un tri�ngulo rect�ngulo conocidas las longitudes de sus
////dos catetos. Desarrolle el algoritmo correspondiente.

//F�rmula: cateto� + cateto� = hipotenusa�

Proceso Ejercicio04_CalcularHipoteusa
	
	Escribir "APP QUE CALCULA LA HIPOTENUSA DE UN TRI�NGULO RECT�NGULO INGRESANDO SUS DOS CATETOS";
	Escribir "";
	
	Definir catetoA, catetoB, hipotenusaAlCuadrado, hipotenusa Como Real;
	
	Escribir "Ingrese el valor de un cateto:";
	leer catetoA;
	Escribir "Ingrese el valor del otro cateto:";
	leer catetoB;
	
	hipotenusaAlCuadrado <- (catetoA ^ 2) + (catetoB ^ 2);
	hipotenusa <- hipotenusaAlCuadrado ^ (1/2);
	
	Escribir "El valor de la hipotenusa es: " , hipotenusa;
	
FinProceso
