#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


// Webcam or video read and display 

int main(){

    //string path = "./vtest.avi";
    VideoCapture cap(0); //for webcam pass as argument is 0 or depnd on the number of cameras are you using 

    Mat img;


    while (true) {
        
        cap.read(img);

        imshow("Image", img);
        
        char c = (char)waitKey(10);
        // Press q to exit from window
        if( c == 27 || c == 'q' || c == 'Q' )
            break;

    }
    return 0;

}