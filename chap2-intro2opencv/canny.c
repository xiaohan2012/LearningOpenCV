//#include "opencv2/core/core_c.h"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"
 
int main( int argc, char** argv )
{
  //声明IplImage指针
  IplImage* pImg = NULL; 
  IplImage* pCannyImg = NULL;
 
  //载入图像，强制转化为Gray
  if( argc == 2 && 
      (pImg = cvLoadImage( argv[1], 0)) != 0 )
    {
 
      //为canny边缘图像申请空间
      pCannyImg = cvCreateImage(cvGetSize(pImg),
					  IPL_DEPTH_8U,
					  1);
      //canny边缘检测
      cvCanny(pImg, pCannyImg, 50, 150, 5);
 
      //创建窗口
      cvNamedWindow("src", 1);
      cvNamedWindow("canny",1);
 
 
      //显示图像
      cvShowImage( "src", pImg );
      cvShowImage( "canny", pCannyImg );
 
      cvWaitKey(0); //等待按键
 
      //销毁窗口
      cvDestroyWindow( "src" );
      cvDestroyWindow( "canny" );
      //释放图像
      cvReleaseImage( &pImg ); 
      cvReleaseImage( &pCannyImg ); 
 
      return 0;
    }
 
  return -1;
}
