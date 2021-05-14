#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){


    string path = "./lena.jpg";
    Mat img = imread(path);

    imshow("Image", img);
    waitKey(0);

    return 0;
}