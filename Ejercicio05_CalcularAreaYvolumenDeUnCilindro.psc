////Desarrolle un algoritmo que permita determinar el área y volumen de un cilindro dado
////su radio (R) y altura (H).

//// Area de la base = pi * radio²
////Area lateral = 2 * pi * radio * altura
////Area total= Area lateral + 2 * Area de la base
////Volumen = pi * radio² * altura

Proceso Ejercicio05_CalcularAreaYvolumenDeUnCilindro
	
	Escribir "APP QUE CALCULA EL AREA TOTAL Y VOLUMEN DE UN CILINDRO";
	
	Definir radio, altura, areaLateral, areaBase, areaTotal, volumen Como Real;
	
	Escribir "Ingrese el radio:";
	leer radio;
	Escribir "Ingrese la altura:";
	leer altura;
	
	areaBase <- pi * radio ^ 2;
	areaLateral <- 2 * pi * radio * altura;
	areaTotal <- areaLateral + (2 * areaBase);
	volumen <- areaBase * altura;
	
	Escribir "El area del cilindro es: " , areaTotal;
	Escribir "El volúmen del cilindro es: " , volumen;
	
FinProceso
