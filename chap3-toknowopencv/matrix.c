#include <opencv2/core/core_c.h>
#include <opencv2/core/types_c.h>
#include <stdio.h>
void printMatF(CvMat mat){
	for(int r = 0 ; r < mat.rows; r++){
		for(int c = 0 ; c < mat.cols; c++){
			printf("%f\t",CV_MAT_ELEM( mat, float, r, c ));
		}
		printf("\n");
		
	}

}
int main(int argc,char * argv){
	int row_c = 2,col_c = 2;
	CvMat * mat = cvCreateMat(row_c , col_c , CV_32FC1);
	*((float *)CV_MAT_ELEM_PTR(*mat , 1 , 1)) = 1.0;
	*((float *)CV_MAT_ELEM_PTR(*mat , 0 , 0)) = 2.0;
	printMatF(*mat);
	printf("%f\t",cvGetReal1D(mat , 3));
	/*CvMat * mat = cvCreateMatHeader(10 , 10 , CV_32FC1);*/
	return 0;
}
