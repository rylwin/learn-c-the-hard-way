CFLAGS=-Wall -g

all: clean
	make ex1 ex3

clean:
	rm -f `ls | grep -e "ex\d$$"`
	rm -rf *.dSYM
