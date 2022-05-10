all: beer caesar vigenere

beer: beer.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o beer beer.c -lcs50 -lm

caesar: caesar.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o caesar caesar.c -lcs50 -lm
	
vigenere: vigenere.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o vigenere vigenere.c -lcs50 -lm
	
crack: crack.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o crack crack.c -lcs50 -lm -lcrypt
	
test: test.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o test test.c -lcs50 -lm -lcrypt
