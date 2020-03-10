all: app

app: teamo.o funcao.o
	gcc obj/teamo.o obj/funcao.o -o bin/coracao

teamo.o: src/teamo.c
	gcc -c src/teamo.c -Iinc -o obj/teamo.o

funcao.o: src/funcao.c
	gcc -c src/funcao.c -Iinc -o obj/funcao.o

run: 
	./bin/coracao

clean:
	rm obj/*.o bin/coracao	