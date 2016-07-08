main: main.c complex.h complex.c complex_test.h complex_test.c
	gcc -Wall -Werror -o main main.c complex.c complex_test.c


.PHONY:clean
clean:
	rm main