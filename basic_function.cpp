#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){

    string path = "./lena.jpg";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    cout << img.size() << endl;

    //Resize of Image
    resize(img, imgResize, Size(), 0.5, 0.5);

    //Croping of Image
    Rect roi(100, 100, 300, 250);
    imgCrop = img(roi);

    imshow("Image", img);
    imshow("Resized Image", imgResize);
    imshow("Cropped Image", imgCrop);
    waitKey(0);

    return 0;
}