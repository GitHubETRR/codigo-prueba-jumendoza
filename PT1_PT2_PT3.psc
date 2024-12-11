Algoritmo PaB_BaP_PT1_PT2_PT3
	Escribir 'Hola, Buenas tardes, este es el menú para iniciar el programa'
	Escribir 'Si quiere utilizar el modo de pasajes, inserte Pasaje.'
	Escribir 'Pero si usted quiere utilizar el modo de suma, inserte Suma.'
	Leer Mode
	Si Mode=='Pasaje' O Mode=='pasaje' O Mode=='PASAJE' Entonces
		Escribir 'Bienvenido, usted a elegido el modo Pasaje'
		Escribir 'Si quiere pasar de polar a binomica introducir PaB'
		Escribir 'Pero si quiere pasar de Binomica a polar introduzca BaP'
		Leer Forma
		Si Forma=='PaB' O Forma=='pab' O Forma=='PAB' O Forma=='polar a binomica' Entonces
			Escribir 'Bienvenido al pasaje de polar a binomica'
			Escribir 'Asigne Z'
			Leer Z
			Escribir 'Asigne Angulo'
			Leer Angulo
			Angulo2 <- Angulo*(PI/180)
			A <- Z*(Cos(Angulo2))
			B <- Z*(Sen(Angulo2))
			Escribir 'Su forma polar es= ',A,'+',B,'j'
		SiNo
			Escribir 'Bienvenido al pasaje de binomica a polar'
			Escribir 'Z = A+Bj'
			Escribir 'Asigne A'
			Leer A
			Escribir 'Asigne B'
			Leer B
			// A=Real=X B=Imaginario=Y
			// C1=++ C2=-+ C3=-- C4=+-
			Si B==0 Entonces
				Si A==0 Entonces
					Escribir 'Su binomica no tiene ni angulo ni modulo'
				SiNo
					Si A>0 Entonces
						Escribir 'Su modulo es ',A
						Escribir 'Su angulo es 0°'
					SiNo
						AF <- ABS(A)
						Escribir 'Su modulo es ',AF
						Escribir 'Su angulo es 180°'
					FinSi
				FinSi
			SiNo
				Si A==0 Entonces
					Si B>0 Entonces
						Escribir 'Su modulo es ',B
						Escribir 'Su angulo es 90°'
					SiNo
						BF <- ABS(B)
						Escribir 'Su modulo es ',BF
						Escribir 'Su angulo es 270°'
					FinSi
				SiNo
					Si 0>A Entonces
						Si 0>B Entonces
							// C3
							// X=- Y=-
							Z <- RAIZ(A*A+B*B)
							Angulo2 <- ATan(B/A)
							Angulo <- Angulo2*(180/PI)
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						SiNo
							// C2
							// X=- Y=+
							Z <- RAIZ(A*A+B*B)
							APOS <- ABS(A)
							Angulo3 <- ATan(B/APOS)
							Angulo2 <- Angulo3*(180/PI)
							Angulo <- Angulo2+90
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						FinSi
					SiNo
						Si 0>B Entonces
							// C4
							// X=+ Y=-
							Z <- RAIZ(A*A+B*B)
							BPOS <- ABS(B)
							Angulo3 <- ATan(BPOS/A)
							Angulo2 <- Angulo3*(180/PI)
							Angulo <- Angulo2+270
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						SiNo
							// C1
							// X=+ Y=+
							Z <- RAIZ(A*A+B*B)
							Angulo2 <- ATan(B/A)
							Angulo <- Angulo2*(180/PI)
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Escribir 'Bienvenido al modo de sumas'
		Escribir 'Forma de numero complejo= (A+BJ)'
		Escribir 'Inserte su primer numero real (A)'
		Leer NR1
		Escribir 'Inserte su primer numero imaginario (B)'
		Leer NI1
		Escribir 'Genial!! ya tenemos el primer numero complejo (',NR1,'+',NI1,'J)'
		Escribir 'Ahora, Inserte su segundo numero real (A)'
		Leer NR2
		Escribir 'Y para terminar, su segundo numero imaginario'
		Leer NI2
		Escribir 'Perfecto!! Ya tenemos el segundo numero complejo (',NR2,'+',NI2,'J)'
		Escribir 'Ahora, ¿En que formato quiere el resultado? (Polar o Rectangular), (Inserte el que prefiera)'
		A <- NR1+NR2
		B <- NI1+NI2
		Leer Formato
		Si Formato=='Polar' O Formato=='polar' Entonces
			Escribir 'Usted a elegido su forma respuesta en forma Polar'
			Si B==0 Entonces
				Si A==0 Entonces
					Escribir 'Su binomica no tiene ni modulo ni angulo'
				SiNo
					Si A>0 Entonces
						Escribir 'Su modulo es ',A
						Escribir 'Su Angulo es 0°'
					SiNo
						APOS <- ABS(A)
						Escribir 'Su modulo es ',APOS
						Escribir 'Su angulo es 180°'
					FinSi
				FinSi
			SiNo
				Si A==0 Entonces
					Si B>0 Entonces
						Escribir 'Su modulo es ',B
						Escribir 'Su angulo es 90°'
					SiNo
						BPOS <- ABS(B)
						Escribir 'Su modulo es ',BPOS
						Escribir 'Su angulo es 270°'
					FinSi
				SiNo
					Si 0>A Entonces
						Si 0>B Entonces
							Z <- RAIZ(A*A+B*B)
							Angulo2 <- ATan(B/A)
							Angulo <- Angulo2*(180/PI)
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						SiNo
							Z <- RAIZ(A*A+B*B)
							APOS <- ABS(A)
							Angulo3 <- ATan(B/APOS)
							Angulo2 <- Angulo3*(180/PI)
							Angulo <- Angulo2+90
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						FinSi
					SiNo
						Si 0>B Entonces
							Z <- RAIZ(A*A+B*B)
							BPOS <- ABS(B)
							Angulo3 <- ATan(BPOS/A)
							Angulo2 <- Angulo3*(180/PI)
							Angulo <- Angulo2+270
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						SiNo
							Z = RAIZ(A*A+B*B)
							Angulo2 <- ATan(B/A)
							Angulo <- Angulo2*(180/PI)
							Escribir 'Z = ',Z
							Escribir 'Angulo = ',Angulo,'°'
						FinSi
					FinSi
				FinSi
			FinSi
		SiNo
			Escribir 'Usted a elegido su respuesta en forma rectangular'
			Escribir 'Su forma rectangular es = (',A,'+',B,'J)'
		FinSi
	FinSi
FinAlgoritmo
