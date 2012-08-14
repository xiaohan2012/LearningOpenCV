#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/types_c.h"
#include "opencv2/legacy/compat.hpp"
#include "opencv2/imgproc/imgproc_c.h"

#include "showimg.h"

IplImage* doPyrDown(IplImage* in , int filter /*= IPL_GAUSSIAN_5x5*/ ) {
	// Best to make sure input image is divisible by two.
	//
	//assert( in->width%2 == 0 && in->height%2 == 0 );
	IplImage* out = cvCreateImage(
		cvSize( in->width/2, in->height/2 ),
		in->depth,
		in->nChannels
	);
	cvPyrDown( in, out , filter );
	return( out );
};

IplImage* doCanny( IplImage* in, double lowThresh, double highThresh, double aperture ) {
	if(in->nChannels != 1) return(0); //Canny only handles gray scale images
	IplImage* out = cvCreateImage(
		cvGetSize( in ),
		IPL_DEPTH_8U,
		1
	);
	cvCanny( in, out, lowThresh, highThresh, aperture );
	return( out );
};

int main(int argc,char ** argv){
	IplImage* in = cvLoadImage(argv[1], CV_LOAD_IMAGE_GRAYSCALE);
	IplImage* img1 = doPyrDown( in, CV_GAUSSIAN_5x5 );
	IplImage* img2 = doPyrDown( img1, CV_GAUSSIAN_5x5 );
	//IplImage* img3 = doCanny( img2, 50, 150, 3 );
	showImage(img2,"cannied");
	// do whatever with ‘img3’
	cvReleaseImage( &img1 );
	cvReleaseImage( &img2 );
	//cvReleaseImage( &img3 );
}
