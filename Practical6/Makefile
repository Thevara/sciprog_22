CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: Matmulc 

Matmulc: main.o Matmul.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o Matmulc main.o Matmul.o $(LDFLAGS)     

Matmul.o: Matmul.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) Matmul.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o  
