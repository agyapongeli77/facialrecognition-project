/*
 * Copyright(c) 2011. Philipp Wagner <bytefish[at]gmx[dot]de>.
 * Released to public domain under terms of the BSD Simplified license.
 *
 * MAC125, SECTION 5243
 * GROUP PROJECT
 * FACIAL RECOGNITION PROJECT USING OPENCV LIBRARIES
 * TEAM MEMBERS: Elija, Umer, Joe & Mikhael
 *
 * This program detects and recognizes students of LAGCC.
 * It draws a GREEN rectangle over a LAGCC student who is
 * in our dataset and outputs "Student Identified"
 * and draws a RED rectangle over any other person who is
 * not in our database and then prints out "Unidentified Person"
 * and also plays "warning sound" to alert the security man.
 *
 * This program uses the fisherface algorithm for
 * facial recognition(Linear Discriminant Analysis).
 * The code is modified in the FaceRecognition header file
 * to suit our project
*/

#include "opencv2/contrib/contrib.hpp"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <vector>
#include <Windows.h>

#include <iostream>
#include "LAGCC_StudentFaceRec.h"

using namespace std;
using namespace cv;

int main()
{

	//Start training the LAGCC students face dataset
	fisherFaceTrainer();

	//Start detecting and recognizing Identified and Non-Identifiend persons of LAGCC
	int recognize = LAGCC_StudentsFaceRecognition();

	system("pause");
	return 0;
}
