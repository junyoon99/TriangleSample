#pragma once

#define WIN32_LEAN_AND_MEAN // 잡다한 쓸모없는 기능을 뺀다

#include <string>
#include <Windows.h>
#include <wrl/client.h>
#include <d3d11.h>
#include "Timer.h"
#include "Input.h"


class D3DFramework
{
public:
	virtual void Initialize(HINSTANCE hInstance, int width = 800, int height = 600);
	virtual void Destroy();
	virtual void GameLoop();

	LRESULT CALLBACK MessageHandle(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
	void InitWindow(HINSTANCE hInstance);
	void InitD3D();
	void CalculateFPS();

protected:
	void OnResize();
	void RenderFrame();

	virtual void Render() {};
	virtual void Update(float delta) {};

private:
	const std::wstring CLASS_NAME{ L"MyClassName" };
	const std::wstring TITLE_TEXT{ L"Direct3D Sample" };

protected:
	int mScreenWidth{ 800 };
	int mScreenHeight{ 600 };
	HWND mHwnd{};
	HINSTANCE mInstance{};

	bool mMinimized{ false };
	bool mMaximized{ false };
	bool mResizing{ false };

	bool mbPaused{ false };

	std::wstring mTitleText{ L"Direct3D Sample" };
	GameUtil::Timer mTimer;
	GameUtil::Input mInput;

	Microsoft::WRL::ComPtr<ID3D11Device> mspDevice{};
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> mspDeviceContext;

	Microsoft::WRL::ComPtr<IDXGISwapChain> mspSwapChain{}; // Interface DX Graphic Infrastructure
	Microsoft::WRL::ComPtr<ID3D11Texture2D> mspRenderTarget{};
	Microsoft::WRL::ComPtr<ID3D11Texture2D> mspDepthStencil{};
	Microsoft::WRL::ComPtr<ID3D11RenderTargetView> mspRenderTargetView{};
	Microsoft::WRL::ComPtr<ID3D11DepthStencilView> mspDepthStencilView{};

};

static LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);