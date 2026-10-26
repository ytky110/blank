bin/blank: src/blank.c
	mkdir -p bin
	cc $^ -o $@ -lncurses 
