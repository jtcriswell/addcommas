CC := clang

addcommas: addcommas.c
	$(CC) -o $@ $<

clean:
	rm -f addcommas
