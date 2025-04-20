////Desarrolle un algoritmo que permita leer tres valores y almacenarlos en las variables A,
////B y C respectivamente. El algoritmo debe imprimir cual es el mayor y cuál es el menor.
////Recuerde constatar que los tres valores introducidos por el teclado sean valores
////distintos. Presente un mensaje de alerta en caso de que se detecte la introducción de
////valores iguales.
Proceso Ejercicio03_ImprimirMayorYMenor
	
	Escribir 'APP QUE PIDE TRES ENTEROS E IMPRIME EL MAYOR Y EL MENOR';
	Escribir '';
	
	Definir a, b, c Como Entero;
	
	Escribir 'Ingrese el valor a:';
	Leer a;
	Escribir 'Ingrese el valor b:';
	Leer b;
	Escribir 'Ingrese el valor c:';
	Leer c;
	
	//COMPARACION DE LOS TRES NÚMEROS
	
	// a mayor y c menor
	Si a>b Y a>c Y b>c Entonces
		Escribir a, ' es el mayor';
		Escribir c, ' es el menor';
	SiNo
		// a mayor y b menor
		Si a>b Y a>c Y c>b Entonces
			Escribir a, ' es el mayor';
			Escribir b, ' es el menor';
		SiNo
			// b mayor y c menor
			Si b>a Y b>c Y a>c Entonces
				Escribir b, ' es el mayor';
				Escribir c, ' es el menor';
			SiNo
				// b mayor y a menor
				Si b>a Y b>c Y c>a Entonces
					Escribir b, ' es el mayor';
					Escribir c, ' es el menor';
				SiNo
					// c mayor y a menor
					Si c>a Y c>b Y b>a Entonces
						Escribir c, ' es el mayor';
						Escribir a, ' es el menor';
					SiNo
						// c mayor y b menor
						Si c>a Y c>b Y a>b Entonces
							Escribir c, ' es el mayor';
							Escribir b, ' es el menor';
						SiNo
							Escribir 'Hay dos o más que son iguales';
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinProceso
