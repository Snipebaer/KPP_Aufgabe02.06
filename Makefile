default: kreisflaeche

kreisflaeche.o: kreisflaeche.c
	gcc -c kreisflaeche.c -o kreisflaeche.o
kreisflaeche: kreisflaeche.o
	gcc kreisflaeche.o -o kreisflaeche

clean: 
	-rm -f kreisflaeche.o
	-rm -f kreisflaeche
