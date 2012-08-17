#include <opencv2/highgui/highgui_c.h>
#include <stdio.h>

int main( int argc, char** argv ) {
	cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE );

	CvCapture* capture = cvCreateCameraCapture(0);
	IplImage* frame;
	assert(capture != NULL);
	while(1) {
		frame = cvQueryFrame( capture );
		if( !frame ) break;
		cvShowImage("Example2", frame );
		char c = cvWaitKey(33);
		printf("%c",c);
		/*if( c == 27 ) break;*/
	}
	cvReleaseCapture( &capture );
	cvDestroyWindow("Example2" );
}

