all: app

app: main.o lista.o
	gcc obj/main.o obj/lista.o -o bin/conta
	
lista.o: src/main.c
	gcc -c src/main.c -Iinc -o obj/main.o
	
main.o: src/lista.c
	gcc -c src/lista.c -Iinc -o obj/lista.o

run:
	./bin/conta

clean:
	rm obj/*.o bin/conta	
