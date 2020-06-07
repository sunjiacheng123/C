#include <iostream>
#include "opencv2/opencv.hpp"
#include <opencv2/highgui.hpp>    
#include <opencv2/imgproc.hpp>
using namespace std;
using namespace cv;

void cvtCOLOR(Mat src, Mat dst)
{
	float R, G, B;
	for (int y = 0; y < src.rows; y++)//��֤x��y����src����������֮��
	{
		uchar* data = dst.ptr<uchar>(y);//ptr��Mat��ĺ���
		for (int x = 0; x < src.cols; x++)
		{
			B = src.at<Vec3b>(y, x)[0];//at��int x��int y����ȡԪ�����꣬��������BԪ�ظ�ֵ
			G = src.at<Vec3b>(y, x)[1];//��������GԪ�ظ�ֵ
			R = src.at<Vec3b>(y, x)[2];//��������RԪ�ظ�ֵ
			data[x] = (int)(R * 0.299 + G * 0.587 + B * 0.114);//���ù�ʽ����Ҷ�ֵ����Ȩƽ������
		}
	}
}

int main()
{
	


	Mat src = imread("H:\\01.bmp", 1);//Mat�಻����һ���ǳ����õ�ͼ��������,ͬʱҲ��һ��ͨ�õľ�����
	Mat dst(src.rows, src.cols, CV_8UC1);//����һ����С��ԭͼ��ͬ�ĻҶ�ͼ����
	//CV_8UC1�� һ���ͼ���ļ���ʽʹ�õ��� Unsigned 8bits��1��ͨ����
	cvtCOLOR(src, dst);
	imshow("ԭʼͼ", src);
	imshow("�Ҷ�ͼ", dst);
	waitKey(0);
	return 0;
}