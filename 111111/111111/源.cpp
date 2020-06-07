#include <iostream>
#include "opencv2/opencv.hpp"
#include <opencv2/highgui.hpp>    
#include <opencv2/imgproc.hpp>
using namespace std;
using namespace cv;

void cvtCOLOR(Mat src, Mat dst)
{
	float R, G, B;
	for (int y = 0; y < src.rows; y++)//保证x，y都在src的行数列数之内
	{
		uchar* data = dst.ptr<uchar>(y);//ptr是Mat类的函数
		for (int x = 0; x < src.cols; x++)
		{
			B = src.at<Vec3b>(y, x)[0];//at（int x，int y）获取元素坐标，对这个点的B元素赋值
			G = src.at<Vec3b>(y, x)[1];//对这个点的G元素赋值
			R = src.at<Vec3b>(y, x)[2];//对这个点的R元素赋值
			data[x] = (int)(R * 0.299 + G * 0.587 + B * 0.114);//利用公式计算灰度值（加权平均法）
		}
	}
}

int main()
{
	


	Mat src = imread("H:\\01.bmp", 1);//Mat类不但是一个非常有用的图像容器类,同时也是一个通用的矩阵类
	Mat dst(src.rows, src.cols, CV_8UC1);//创建一个大小与原图相同的灰度图容器
	//CV_8UC1： 一般的图像文件格式使用的是 Unsigned 8bits，1是通道数
	cvtCOLOR(src, dst);
	imshow("原始图", src);
	imshow("灰度图", dst);
	waitKey(0);
	return 0;
}