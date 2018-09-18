#include <iostream>
#include <Eigen/Core>
#include <Eigen/Eigenvalues>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;
using namespace std;
using namespace Eigen;

void run_eigen_example(void)
{
	MatrixXd A = MatrixXd::Random(6,6);
	cout << "Here is a random 6x6 matrix, A:" << endl << A << endl << endl;
	EigenSolver<MatrixXd> es(A);
	cout << "The eigenvalues of A are:" << endl << es.eigenvalues() << endl;
	cout << "The matrix of eigenvectors, V, is:" << endl << es.eigenvectors() << endl << endl;
	complex<double> lambda = es.eigenvalues()[0];
	cout << "Consider the first eigenvalue, lambda = " << lambda << endl;
	VectorXcd v = es.eigenvectors().col(0);
	cout << "If v is the corresponding eigenvector, then lambda * v = " << endl << lambda * v << endl;
	cout << "... and A * v = " << endl << A.cast<complex<double> >() * v << endl << endl;
	MatrixXcd D = es.eigenvalues().asDiagonal();
	MatrixXcd V = es.eigenvectors();
	cout << "Finally, V * D * V^(-1) = " << endl << V * D * V.inverse() << endl;
	return;
}


void run_opencv_example(void)
{
    //create a gui window:
    namedWindow("Output",1);
    
    //initialize a 120X350 matrix of black pixels:
    Mat output = Mat::zeros( 120, 350, CV_8UC3 );
    
    //write text on the matrix:
    putText(output,
            "Hello World :)",
            cvPoint(15,70),
            FONT_HERSHEY_PLAIN,
            3,
            cvScalar(0,255,0),
            4);
    
    //display the image:
    imshow("Output", output);
    
    //wait for the user to press any key:
    waitKey(0);
    return;
}



int main(int argc, char *argv[])
{
    run_eigen_example();
	run_opencv_example();
    return 0;
}




