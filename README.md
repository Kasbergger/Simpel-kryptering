# Simpel-kryptering

All is writen en danish for school purposes.

Et simpelt krypterings program

Formål:
	At læse en fil og skrive på en anden fil, derved 
	skabe "permanent" data opbevaring for efter 
	programmet slukkes

Lært:
	At åbne en pointer til en fil: FILE *fp
		fp = fopen("fil.addresse", "type (r, r+, w, w+)")
	At læse fra en fil og skrive det ned i en anden
		fscanf(filPointer, "karakter(%c)", variabel(c))
		fputc(c, filPointer2)
	At sætte en pointer tilbage til starten af en fil, 
	dette er vigtigt da det kan fucke læsning op hvis det ikke gøres
		rewind(filPointer)
	At kryptere og dekryptere
		fputc(c+12, filPointer2)
		fputc(c-12, filPointer2)
	At lukke en fil
		fclose(filPointer)
