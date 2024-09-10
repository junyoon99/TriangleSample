#pragma once
#include <array>

namespace GameUtil 
{
	class Input
	{
	public:
		void Initaialize();

		void SetKeyDown(unsigned int key);
		void SetKeyUp(unsigned int key);
		void SetCursorPosition(int x, int y);

		bool IsKeyDown(unsigned int key);
		void GetCursorPosition(int& x, int& y);

	private : 
		int mCursorX, mCursorY;
		std::array<bool, 256> mKeys;
	};
}


