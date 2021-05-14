#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

///////////////////////////// Draw Shape and Text ///////////////////////////////////

int main(){
    //Blank Image
    Mat img (512, 512, CV_8UC3, Scalar(255, 255, 255));
    //draw a circle
    circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED); //Also pass the thickness value in case of FILLED like "10"
    
    //draw a rectangle
    rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), 10);// Passes FILLED insead of thickness
    
    //draw a line
    line(img, Point(130,296), Point(382,286), Scalar(255,0,0), 5);
    
    //put text inside the image
    putText(img, "Akshay Jaryal Artificial Intelligence Researcher", Point(10, 262), FONT_HERSHEY_DUPLEX, 0.75, Scalar(255,70,150), 2);

    imshow("Image", img);
    waitKey(0);

    return 0;
}