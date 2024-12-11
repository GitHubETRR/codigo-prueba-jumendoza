Algoritmo Punto5
	Repetir
		Escribir "Bienvenido a nuestro programa para calcular las reactancias a partir de un voltaje y una corriente."
		MZ = C_Modulos()
		AZ = Modulo_A()
		reals = imreal(MZ,AZ)
		imagin = Imim(MZ,AZ)
		Part4(reals,imagin)
		Escribir "Si terminó, ingrese 0. Si quiere seguir calculando, ingrese 1"
		Leer valour
	Hasta Que valour=0
FinAlgoritmo

Funcion MZ = C_Modulos()
	Escribir "Por favor, ingrese el modulo del voltaje"
	Leer MV
	Escribir "Ahora, introduzca el modulo de la corriente"
	Leer MI
	MZ = MV/MI
FinFuncion

Funcion AZ = Modulo_A()
	Escribir "Por favor, ingrese el angulo del voltaje"
	Leer AV
	Escribir "Ahora, ingrese el angulo de la corriente"
	Leer AC
	Si AV>=AC Entonces
		AZ = AV-AC
	SiNo
		AZ = AV-AC+360
	FinSi
FinFuncion

Funcion reals = Imreal(MZ,AZ)
	AZ = (AZ*pi)/180
	reals = cos(AZ)*MZ
	Escribir "La parte real de la impedancia es ",reals
FinFuncion

Funcion imagin = Imim(MZ,AZ)
	AZ = (AZ*pi)/180
	imagin = sen(AZ)*MZ
	Escribir "La parte imaginaria de la impedancia es ", imagin
FinFuncion

Funcion Part4(reals,imagin)
	Escribir "Por favor, introduzca su frecuencia de trabajo"
	Leer Frec
	W = 2*pi*Frec
	Si imagin=0 Entonces
		Escribir "Su circuito no cuenta con capacitancia ni inductancia"
	SiNo
		Si imagin>0 Entonces
			L = imagin/W
			Escribir "Su resistencia es de ",reals," Ohms y su inductancia es de ",L," Henries."
		SiNo
			C = -1/(W*imagin)
			Escribir "Su resistencia es de ",reals," Ohms y su capacitancia es de ",C," F."
		FinSi
	FinSi
FinFuncion
