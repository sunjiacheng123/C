#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>    

#include <stdio.h>    

#include <stdlib.h>    

#include <ctype.h>    

#include <string.h>    

#include <malloc.h>    


#if 0
void img_rgb2gray()
{

	char readPath[] = "D:\\C++_file\\image_deal_C++\\IMAGE_JIEQU\\1.bmp";
	readBmp(readPath);


	unsigned char *pGrayData;
	//因为转换后多了个颜色表，所以要改变
	bfoffbits += (sizeof(RGBQUAD) * 256);
	//biSizeImg存储的为位图数据占用的字节数，转换为灰度图像后值发生改变，  
	//因为24为真彩色位图数据的一个像素用3各字节表示，灰度图像为1个字节  
	biBitCount = 8;
	int lineBytes = (bmpWidth * biBitCount / 8 + 3) / 4 * 4;
	int oldLineBytes = (bmpWidth * 24 / 8 + 3) / 4 * 4;;
	pGrayData = new unsigned char[lineBytes * bmpHeight];
	//memset(pGrayData, 0, bmpInfoHeader.biSizeImage);
	//这里要注意，Windows规定一个扫描行所占的字节数必须是  
	//4的倍数(即以long为单位),不足的以0填充，所以如果当前biWidth如果不是  
	//4的倍数时，要在后面补0直到为4的倍数  
	//-------------------------------定义灰度图像的颜色表--------------------//  

	pColorTable = new RGBQUAD[256];
	for (int i = 0; i < 256; i++)
	{
		(*(pColorTable + i)).rgbBlue = i;
		(*(pColorTable + i)).rgbGreen = i;
		(*(pColorTable + i)).rgbRed = i;
		(*(pColorTable + i)).rgbReserved = 0;
	}
	//--------------------------------将RGB转换为灰度值------------------------//  
	int red, green, blue;
	BYTE gray;
	//char gray_1;

	for (int i = 0; i < bmpHeight; i++)
	{
		//位图数据(pBmpData)中存储的实际像素数为biWidth个,而一个扫描行要lineByte个字节，  
		//多余出来的是上面补的0,所以要转换的要是实际的像素数,  
		//因为转换前后biWidth是相同的，而lineByte是不同的，也就是后面补的0不同  
		for (int j = 0; j < bmpWidth; j++)
		{
			red = *(pBmpBuf + i*oldLineBytes + 3 * j + 2);
			green = *(pBmpBuf + i*oldLineBytes + 3 * j + 1);
			blue = *(pBmpBuf + i*oldLineBytes + 3 * j );
			gray = (BYTE)((77 * red + 151 * green + 28 * blue) >> 8);
			//gray_1 = red*0.299 + green*0.587 + blue*0.114;
			*(pGrayData + i*lineBytes + j) = gray;
		}
	}
	/*
	int threshold=128;
	for (int i = 0; i < bmpHeight; i++)
	{
	//二值化 
	for (int j = 0; j < bmpWidth; j++)
	{
	if (*(pGrayData + i*lineBytes + j)>threshold)
	*(pGrayData + i*lineBytes + j) = 255;
	else
	*(pGrayData + i*lineBytes + j) = 0;
	}
	}
	*/
	char writePath[] = "D:\\C++_file\\image_deal_C++\\IMAGE_JIEQU\\11.bmp";
	saveBmp(writePath, pGrayData, bmpWidth, bmpHeight, biBitCount, pColorTable);
	printf("灰度化完成，请查看bmp文件。\n\n");
}

#endif