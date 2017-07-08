#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, const char** argv )
{    
     comehere:
     int c=0,cc=0;
     Mat img = imread("z0.png", CV_LOAD_IMAGE_UNCHANGED);
     if (img.empty())
     {
          cout << "Error : Image cannot be loaded..!!" << endl;
          return -1;
     }

     namedWindow("MyWindow", CV_WINDOW_AUTOSIZE); //create a window with the name "MyWindow"
     moveWindow("MyWindow", 300, 90);

     int x0,x1,y0,y1,tr=0;
     x0=x1=y0=y1=0;

     while(1)
     {
          tr = 0;
          imshow("MyWindow", img); //display the image which is stored in the 'img' in the "MyWindow" window
          c = waitKey(0);
          c = c % 256;
          //cout << c << "\n";
          if(c == 27)
          {
               cout << "\n";
               break;
          }

          if((c == 65) || (c == 97))
          {
               tr = 1;
               x1 = 118; y1 = 84;
               cout << "a";
          }
          else if((c == 66) || (c == 98))
          {
               tr = 1;
               x1 = 408; y1 = 136;
               cout << "b";
          }
          else if((c == 67) || (c == 99))
          {
               tr = 1;
               x1 = 280; y1 = 136;
               cout << "c";
          }
          else if((c == 68) || (c == 100))
          {
               tr = 1;
               x1 = 250; y1 = 84;
               cout << "d";
          }
          else if((c == 69) || (c == 101))
          {
               tr = 1;
               x1 = 225; y1 = 30;
               cout << "e";
          }
          else if((c == 70) || (c == 102))
          {
               tr = 1;
               x1 = 315; y1 = 84;
               cout << "f";
          }
          else if((c == 71) || (c == 103))
          {
               tr = 1;
               x1 = 379; y1 = 84;
               cout << "g";
          }
          else if((c == 72) || (c == 104))
          {
               tr = 1;
               x1 = 445; y1 = 84;
               cout << "h";
          }
          else if((c == 73) || (c == 105))
          {
               tr = 1;
               x1 = 558; y1 = 30;
               cout << "i";
          }
          else if((c == 74) || (c == 106))
          {
               tr = 1;
               x1 = 509; y1 = 84;
               cout << "j";
          }
          else if((c == 75) || (c == 107))
          {
               tr = 1;
               x1 = 573; y1 = 84;
               cout << "k";
          }
          else if((c == 76) || (c == 108))
          {
               tr = 1;
               x1 = 639; y1 = 84;
               cout << "l";
          }
          else if((c == 77) || (c == 109))
          {
               tr = 1;
               x1 = 537; y1 = 136;
               cout << "m";
          }
          else if((c == 78) || (c == 110))
          {
               tr = 1;
               x1 = 471; y1 = 136;
               cout << "n";
          }
          else if((c == 79) || (c == 111))
          {
               tr = 1;
               x1 = 623; y1 = 30;
               cout << "o";
          }
          else if((c == 80) || (c == 112))
          {
               tr = 1;
               x1 = 690; y1 = 30;
               cout << "p";
          }
          else if((c == 81) || (c == 113))
          {
               tr = 1;
               x1 = 94; y1 = 30;
               cout << "q";
          }
          else if((c == 82) || (c == 114))
          {
               tr = 1;
               x1 = 292; y1 = 30;
               cout << "r";
          }
          else if((c == 83) || (c == 115))
          {
               tr = 1;
               x1 = 184; y1 = 84;
               cout << "s";
          }
          else if((c == 84) || (c == 116))
          {
               tr = 1;
               x1 = 359; y1 = 30;
               cout << "t";
          }
          else if((c == 85) || (c == 117))
          {
               tr = 1;
               x1 = 492; y1 = 30;
               cout << "u";
          }
          else if((c == 86) || (c == 118))
          {
               tr = 1;
               x1 = 344; y1 = 136;
               cout << "v";
          }
          else if((c == 87) || (c == 119))
          {
               tr = 1;
               x1 = 160; y1 = 30;
               cout << "w";
          }
          else if((c == 88) || (c == 120))
          {
               tr = 1;
               x1 = 215; y1 = 136;
               cout << "x";
          }
          else if((c == 89) || (c == 121))
          {
               tr = 1;
               x1 = 424; y1 = 30;
               cout << "y";
          }
          else if((c == 90) || (c == 122))
          {
               tr = 1;
               x1 = 150; y1 = 136;
               cout << "z";
          }
          else if(c == 9) // clear the pattern
          {
               tr = 1;
               //x1 = 28; y1 = 22;
               cout << " Tab\n";
               destroyWindow("MyWindow");
               goto comehere;
          }
          else if(c == 10)
          {
               tr = 1;
               x1 = 737; y1 = 84;
               cout << "Enter";
          }
          else if(c == 44)
          {
               tr = 1;
               x1 = 600; y1 = 136;
               cout << ",";
          }
          else if(c == 46)
          {
               tr = 1;
               x1 = 664; y1 = 136;
               cout << ".";
          }
          else if((c == 127) || (c == 8))
          {
               tr = 1;
               x1 = 760; y1 = 30;
               cout << "Backspace";
          }
          else if(c == 225)
          {
               tr = 1;
               x1 = 57; y1 = 136;
               cout << "lsh";
          }
          else if(c == 226)
          {
               tr = 1;
               x1 = 747; y1 = 136;
               cout << "rsh";
          }
          else if(c == 32)
          {
               cc = 0;
               cout << " ";
          }

          if((cc == 0) && (tr == 1))
          {
               circle( img, Point( x1, y1 ), 4.0, Scalar( 0, 0, 255, 255), -1, 8 );
               line( img, Point(x1, y1), Point(x1, y1), Scalar(110, 220, 0,255),  2, 8 );
               cc = 1;
          }
          else if((cc == 1) && (tr == 1))
          {
               circle( img, Point( x1, y1 ), 4.0, Scalar( 0, 0, 255, 255), -1, 8 );
               line( img, Point(x0, y0), Point(x1, y1), Scalar(110, 220, 0, 255),  2, 8 );
          }
          x0 = x1; y0 = y1;
     }
     destroyWindow("MyWindow"); //destroy the window with the name, "MyWindow"
     return 0;
}

/*

g++ pattern.cpp -lopencv_core -lopencv_highgui -lopencv_imgproc -o pattern

default x=1 y=53

Tab  x 28    y 77
q    x 94    y 80
w    x 160   y 80
e    x 225   y 80
r    x 292   y 80
t    x 359   y 80
y    x 424   y 80
u    x 492   y 80
i    x 558   y 80
o    x 623   y 80
p    x 690   y 80
back x 760   y 80

a    x 118   y 134
s    x 184   y 134
d    x 250   y 134
f    x 315   y 134
g    x 379   y 134
h    x 445   y 134
j    x 509   y 134
k    x 573   y 134
l    x 639   y 134
ent  x 737   y 134

lsh  x 57    y 186
z    x 150   y 186
x    x 215   y 186
c    x 280   y 186
v    x 344   y 186
b    x 408   y 186
n    x 471   y 186
m    x 537   y 186
,    x 600   y 186
.    x 664   y 186
rsh  x 747   y 186

*/