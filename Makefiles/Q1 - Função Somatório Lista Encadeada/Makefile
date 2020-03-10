all: app

app: main.o lista.o
	gcc obj/main.o obj/lista.o -o bin/app

main.o: src/main.c
	gcc -c src/main.c -Iinc -o obj/main.o

lista.o: src/lista.c
	gcc -c src/lista.c -Iinc -o obj/lista.o

run:
	./bin/app

clean:
	rm obj/*.o bin/app
