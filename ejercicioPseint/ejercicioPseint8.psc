Proceso producto_punto
	Definir n, i Como Entero;
	Definir vector1, vector2 Como Real;
	Definir productoPunto Como Real;
	Escribir 'Ingrese el tama�o de los vectores: ';
	Leer n;
	Dimensionar vector1(100), vector2(100);
	Escribir 'Ingrese los elementos del primer vector: ';
	Para i<-1 Hasta n Hacer
		Leer vector1[i];
	FinPara
	Escribir 'Ingrese los elementos del segundo vector: ';
	Para i<-1 Hasta n Hacer
		Leer vector2[i];
	FinPara
	productoPunto <- 0;
	Para i<-1 Hasta n Hacer
		productoPunto <- productoPunto+(vector1[i]*vector2[i]);
	FinPara
	Escribir 'El producto punto de los dos vectores es: ', productoPunto;
FinProceso