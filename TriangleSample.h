#pragma once

#include "D3DFramework.h"

class TriangleSample : public D3DFramework
{
public:
	void Initialize(HINSTANCE hInstance, int width = 800, int height = 600) override;
	void Destroy() override;

protected:
	void Render() override;

private:
	void InitTriangle();
	void InitPipeline();

	struct VERTEX 
	{
		FLOAT X, Y, Z;
		FLOAT Color[4];

		// Color
		// UV
		// Normal (x,y,z)
	};

	Microsoft::WRL::ComPtr<ID3D11VertexShader> mspVertexShader;
	Microsoft::WRL::ComPtr<ID3D11PixelShader> mspPixelShader;
	Microsoft::WRL::ComPtr<ID3D11InputLayout> mspInputLayout;
	Microsoft::WRL::ComPtr<ID3D11Buffer> mspVertexBuffer;
};

