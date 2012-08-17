CVOPTS = pkg-config --cflags --libs opencv
INCLUDE = -I/usr/include/opencv2/highgui -I/usr/include/opencv2/cv -I/usr/include/opencv2/imgproc

BIN = bin
ALL =  matrix

all:$(ALL)
matrix:matrix.c
	gcc matrix.c  $(INCLUDE) `$(CVOPTS)` -o $(BIN)/matrix
clean:
	rm -f $(ALL) *.o *.a *.so $(BIN)/*
