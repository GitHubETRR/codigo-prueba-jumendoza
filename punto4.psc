Algoritmo sin_titulo
	Escribir 'Hola, bienvenido a nuestro programa para pasar una impedancia a resistencia y capacitor o inductor.'
	Escribir 'Por favor introduzca su parte real'
	Leer reals
	Escribir 'Ahora, introduzca su parte imaginaria'
	Leer imagin
	Escribir 'Ahora, introduzca la frecuencia de trabajo'
	Leer frec
	W = 2*pi*frec
	Si imagin = 0 Entonces
		Escribir "El circuito no tiene cpacitancia ni inductancia"
	SiNo
		Si imagin>0 Entonces
			L = imagin/W
			Escribir "La resistencia de su circuito es de " ,reals, " Ohms y su inductancia es de " ,L, " Henries."
		SiNo
			C = -1/(W*imagin)
			Escribir "la resistencia de su circuito es " ,reals, " Ohms y su capacitancia es de " ,C, " faradios."
		FinSi
	FinSi
	Escribir "Gracias por elegirnos"
FinAlgoritmo
