#include "TextureConverter.h"
#include<DirectXTex.h>
using namespace std;
//#include<stringapiset.h>
using namespace DirectX;

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	//�e�N�X�`���t�@�C���̓ǂݍ���
	LoadWICTextureFromFile(filePath);


	//DDS�`���ɂ��ď����o��

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	//�t�@�C���p�X�����C�h�����ɕϊ�
	wstring wfilePath = ConvertMultiByteStringToWideString(filePath);


	//�e�N�X�`���̓ǂݍ���


}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}
