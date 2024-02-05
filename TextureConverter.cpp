#include "TextureConverter.h"
#include<DirectXTex.h>
using namespace std;
//#include<stringapiset.h>
using namespace DirectX;

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	//テクスチャファイルの読み込み
	LoadWICTextureFromFile(filePath);


	//DDS形式にして書き出し

}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	//ファイルパスをワイド文字に変換
	wstring wfilePath = ConvertMultiByteStringToWideString(filePath);


	//テクスチャの読み込み


}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString)
{
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//ワイド文字列に変換
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}
