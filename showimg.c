#include "showimg.h"
void showImage(IplImage * img,char * window_id){
    cvNamedWindow( window_id, CV_WINDOW_AUTOSIZE );
    cvShowImage( window_id, img );
    cvWaitKey(0);
    cvReleaseImage( &img );
    cvDestroyWindow( "Example1" );
}

