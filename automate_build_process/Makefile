reciprocal: main.o reciprocal.o
	g++ $(CFLAGS) -o reciprocal main.o reciprocal.o
main.o: main.c headers/reciprocal.hpp
	gcc $(CFLAGS) -c main.c -I headers/
reciprocal.o: reciprocal.cpp headers/reciprocal.hpp
	g++ $(CFLAGS) -c reciprocal.cpp -I headers/
clean:
	rm -f *.o reciprocal
