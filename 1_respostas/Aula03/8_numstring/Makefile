num: main.o num_caracs.o
	gcc $(CFLAGS) -o num main.o num_caracs.o
main.o: main.c num_caracs.h
	gcc $(CFLAGS) -c main.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc $(CFLAGS) -c num_caracs.c
clean:
	rm -f *.o reciprocal
