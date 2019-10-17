all: main.c main.h
	gcc -o gradlew main.c
run:
	./gradlew
clean:
	rm gradlew
