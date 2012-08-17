#include <opencv2/core/core_c.h>
#include <opencv2/core/types_c.h>

int main(int argc,char * argv){
	cvMat * mat = cvCreateMat(10 , 10 , CV_32FC1);
	/*cvMat * mat = cvCreateMatHeader(10 , 10 , CV_32FC1);*/
	
	return 0;
}
