#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main(int argc, char *argv[])
{
    //1 for color image, 0 for grayscale
    //the last input parameter can also be CV_LOAD_IMAGE_COLOR
    //or COLOR_LOAD_IMAGE_GRAYSCALE
    Mat img = imread("1.jpg", 1);
    if(img.empty())
       return -1;
    //namedWindow( "naruto", CV_WINDOW_AUTOSIZE );
    //https://docs.opencv.org/2.4/modules/highgui/doc/user_interface.html
    namedWindow( "naruto", CV_WINDOW_FREERATIO);
    imshow("naruto", img);
    waitKey(0);

    Mat img2;
    cvtColor(img, img2, CV_BGR2GRAY);
    namedWindow("graynaruto", CV_WINDOW_KEEPRATIO);
    imshow("graynaruto",img2);
    waitKey(0);

    return 0;
}

