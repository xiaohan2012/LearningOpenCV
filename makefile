CVOPTS = pkg-config --cflags --libs opencv
INCLUDE = -I/usr/include/opencv2/highgui -I/usr/include/opencv2/cv -I/usr/include/opencv2/imgproc

all:playavi trackbarslide smooth pyrdown_canny canny camera writeavi
showimg.o:showimg.c
	gcc -c showimg.c  $(INCLUDE) `$(CVOPTS)`
playavi:playavi.c
	gcc playavi.c  $(INCLUDE) `$(CVOPTS)` -o playavi
trackbarslide:trackbarslide.c
	gcc trackbarslide.c  $(INCLUDE) `$(CVOPTS)` -o trackbarslide
smooth:smooth.c
	gcc smooth.c  $(INCLUDE) `$(CVOPTS)` -o smooth
pyrdown_canny:pyrdown_canny.c  showimg.o
	gcc pyrdown_canny.c showimg.o  $(INCLUDE) `$(CVOPTS)` -o pyrdown_canny
canny:canny.c
	gcc canny.c  $(INCLUDE) `$(CVOPTS)` -o canny
camera:camera.c
	gcc camera.c  $(INCLUDE) `$(CVOPTS)` -o camera
writeavi:writeavi.c
	gcc writeavi.c  $(INCLUDE) `$(CVOPTS)` -o writeavi
