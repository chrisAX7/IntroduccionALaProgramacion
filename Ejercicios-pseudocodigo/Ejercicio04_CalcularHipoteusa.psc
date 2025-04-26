////Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus
////dos catetos. Desarrolle el algoritmo correspondiente.

//Fórmula: cateto² + cateto² = hipotenusa²

Proceso Ejercicio04_CalcularHipoteusa
	
	Escribir "APP QUE CALCULA LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO INGRESANDO SUS DOS CATETOS";
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
