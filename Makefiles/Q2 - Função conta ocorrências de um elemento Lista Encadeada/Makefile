all: app

app: main.o lista.o
	gcc -c src/main.c -Iinc -o obj/main.o

lista.o: src/main.c
	gcc -c src/lista.c -Iinc -o obj/lista.o
	
main.o: src/lista.c
	gcc obj/main.o obj/lista.o -o bin/conta

run:
	./bin/conta

clean:
	rm obj/*.o bin/conta	
