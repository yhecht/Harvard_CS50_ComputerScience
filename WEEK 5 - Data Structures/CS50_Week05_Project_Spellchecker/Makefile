# Yannique Hecht
# HARVARD CS50 Week 5 - Speller - Implement a program that fastly spell-checks files with a hash table

# tells make to execute the subsequent lines whenever you yourself execute make speller (or just make).
speller:
# tells make how to compile speller.c into machine code (i.e., speller.o)
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -c -o speller.o speller.c
# tells make how to compile dictionary.c into machine code (i.e., dictionary.o)
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -c -o dictionary.o dictionary.c
# tells make to link speller.o and dictionary.o in a file called speller
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -o speller speller.o dictionary.o -lm
