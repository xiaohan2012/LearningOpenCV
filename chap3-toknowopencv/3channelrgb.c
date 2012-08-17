#include <opencv2/core/types_c.h>
#include <opencv2/core/core_c.h>
#include <stdio.h>
 
int main(){
	CvMat * mat = cvCreateMat(2,2,CV_32FC3);
	float arr_1_1[] = {1.0 , 2.0 , 3.0};
	*((float **)CV_MAT_ELEM_PTR(*mat , 1 , 1)) = arr_1_1;
	float  * arr = *((float **)CV_MAT_ELEM_PTR( *mat , 1 , 1));
	/*printf("%f",scalar);*/
	printf("%f\t%f\t%f\n",arr[0],arr[1],arr[2]);
	CvScalar scalar = cvGet2D(mat , 1 , 1);
	printf("%f\t%f\t%f\n",scalar.val[0],scalar.val[1],scalar.val[2]);
}
