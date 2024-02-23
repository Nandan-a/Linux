output: addmul.o adddef.o muldef.o
	gcc addmul.o adddef.o muldef.o -o output
addmul.o: addmul.c addfunction.h
	gcc addmul.c -c
adddef.o: adddef.c
	gcc adddef.c -c
muldef.o: muldef.c
	gcc muldef.c -c
clean:
	rm *.o output
run:
	./output
