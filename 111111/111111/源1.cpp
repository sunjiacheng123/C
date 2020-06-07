#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
#include<iostream>
#include <Windows.h>

using namespace std;


void main()
{

	FILE* stream=fopen("H:\\01.bmp","rb");
	if(stream==NULL)
	{
		cout<<"文件不存在"<<endl;
		return;
	}

	int sizeFileHeader=sizeof(BITMAPFILEHEADER);
	int sizeInfoHeader=sizeof(BITMAPINFOHEADER);

	BITMAPFILEHEADER* bitmapFileHeader=new BITMAPFILEHEADER[sizeFileHeader+1];

	BITMAPINFOHEADER* bitmapInfoHeader=new BITMAPINFOHEADER[sizeInfoHeader+1];

	memset(bitmapFileHeader,0,sizeFileHeader+1);
	memset(bitmapInfoHeader,0,sizeInfoHeader+1);
	fread(bitmapFileHeader,sizeof(char),sizeFileHeader,stream);
	fseek(stream,sizeFileHeader,0);
	fread(bitmapInfoHeader,sizeof(char),sizeInfoHeader,stream);
	int srcImageLineByteCount=(((bitmapInfoHeader->biWidth*24)+31)/32)*4;
	int destImageLineByteCount=(((bitmapInfoHeader->biWidth)*8+31)/32)*4;

	//************位图信息头**********************

	BYTE** oldImageData=new BYTE*[bitmapInfoHeader->biHeight];
	for(int i=0;i<bitmapInfoHeader->biHeight;i++)
	{
		oldImageData[i]=new BYTE[srcImageLineByteCount+1];
		memset(oldImageData[i],0,srcImageLineByteCount+1);
	}

	//***********位图数据***********************
	fseek(stream,sizeFileHeader+sizeInfoHeader,0);
	//读取图像数据
	for(int i=0;i<bitmapInfoHeader->biHeight;i++)
	{
		for (int j=0;j<srcImageLineByteCount;j++)
		{
			fread(&oldImageData[i][j],sizeof(BYTE),1,stream);

		}

	}

	fclose(stream);

	//调色板
	RGBQUAD* pRgbQuards=new RGBQUAD[256];
	for(int i=0;i<256;i++)
	{
		pRgbQuards[i].rgbBlue=i;
		pRgbQuards[i].rgbRed=i;
		pRgbQuards[i].rgbGreen=i;

	}

	//修改信息头
	bitmapInfoHeader->biBitCount=8;
	bitmapInfoHeader->biSizeImage=(bitmapInfoHeader->biHeight)*destImageLineByteCount;

	//修改文件头
	bitmapFileHeader->bfOffBits = sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER)+sizeof(RGBQUAD)* 256;
	bitmapFileHeader->bfSize = bitmapFileHeader->bfOffBits + bitmapInfoHeader->biSizeImage;


	//写数据

	BYTE** newImageData = new BYTE*[bitmapInfoHeader->biHeight];

	for (int i = 0; i<bitmapInfoHeader->biHeight; i++)
	{
		newImageData[i] = new BYTE[destImageLineByteCount];
	}

	for (int i = 0; i<bitmapInfoHeader->biHeight; i++)
	{
		for (int j = 0; j<destImageLineByteCount; j++)
		{
			newImageData[i][j] = (int)((float)oldImageData[i][j * 3] * 0.114 +
				(float)oldImageData[i][j * 3 + 1] * 0.587 + (float)oldImageData[i][3 * j + 2] * 0.299);
		}
	}
	FILE* fileWrite = fopen("H:\\02.bmp", "a+");
	fwrite(bitmapFileHeader, sizeof(char), sizeof(BITMAPFILEHEADER), fileWrite);
	fwrite(bitmapInfoHeader, sizeof(char), sizeof(BITMAPINFOHEADER), fileWrite);
	fwrite(pRgbQuards, sizeof(RGBQUAD), 256, fileWrite);

	for (int i = 0; i<bitmapInfoHeader->biHeight; i++)
	{
		for (int j = 0; j<destImageLineByteCount; j++)
		{
			fwrite(&newImageData[i][j], sizeof(BYTE), 1, fileWrite);
		}

	}
	fclose(fileWrite);

	cout << "success" << endl;
}

#endif
