CVOPTS = pkg-config --cflags --libs opencv
INCLUDE = -I/usr/include/opencv2/highgui -I/usr/include/opencv2/cv -I/usr/include/opencv2/imgproc
OPTION = -std=c99
BIN = bin
ALL =  matrix 3channelrgb

all:$(ALL)
matrix:matrix.c
	gcc $(OPTION)  matrix.c  $(INCLUDE) `$(CVOPTS)` -o $(BIN)/matrix
3channelrgb:3channelrgb.c
	gcc $(OPTION)  3channelrgb.c  $(INCLUDE) `$(CVOPTS)` -o $(BIN)/3channelrgb
clean:
	rm -f $(ALL) *.o *.a *.so $(BIN)/*
