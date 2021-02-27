all:
	gcc -Werror -Wall -o main main.c
clean:
	$(RM) main
