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
	//��Ϊת������˸���ɫ������Ҫ�ı�
	bfoffbits += (sizeof(RGBQUAD) * 256);
	//biSizeImg�洢��Ϊλͼ����ռ�õ��ֽ�����ת��Ϊ�Ҷ�ͼ���ֵ�����ı䣬  
	//��Ϊ24Ϊ���ɫλͼ���ݵ�һ��������3���ֽڱ�ʾ���Ҷ�ͼ��Ϊ1���ֽ�  
	biBitCount = 8;
	int lineBytes = (bmpWidth * biBitCount / 8 + 3) / 4 * 4;
	int oldLineBytes = (bmpWidth * 24 / 8 + 3) / 4 * 4;;
	pGrayData = new unsigned char[lineBytes * bmpHeight];
	//memset(pGrayData, 0, bmpInfoHeader.biSizeImage);
	//����Ҫע�⣬Windows�涨һ��ɨ������ռ���ֽ���������  
	//4�ı���(����longΪ��λ),�������0��䣬���������ǰbiWidth�������  
	//4�ı���ʱ��Ҫ�ں��油0ֱ��Ϊ4�ı���  
	//-------------------------------����Ҷ�ͼ�����ɫ��--------------------//  

	pColorTable = new RGBQUAD[256];
	for (int i = 0; i < 256; i++)
	{
		(*(pColorTable + i)).rgbBlue = i;
		(*(pColorTable + i)).rgbGreen = i;
		(*(pColorTable + i)).rgbRed = i;
		(*(pColorTable + i)).rgbReserved = 0;
	}
	//--------------------------------��RGBת��Ϊ�Ҷ�ֵ------------------------//  
	int red, green, blue;
	BYTE gray;
	//char gray_1;

	for (int i = 0; i < bmpHeight; i++)
	{
		//λͼ����(pBmpData)�д洢��ʵ��������ΪbiWidth��,��һ��ɨ����ҪlineByte���ֽڣ�  
		//��������������油��0,����Ҫת����Ҫ��ʵ�ʵ�������,  
		//��Ϊת��ǰ��biWidth����ͬ�ģ���lineByte�ǲ�ͬ�ģ�Ҳ���Ǻ��油��0��ͬ  
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
	//��ֵ�� 
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
	printf("�ҶȻ���ɣ���鿴bmp�ļ���\n\n");
}

#endif