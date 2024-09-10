#include "Input.h"

namespace GameUtil 
{
	void Input::Initaialize()
	{
		mKeys.fill(false);
		mCursorX = mCursorY = -1;
	}

	void Input::SetKeyDown(unsigned int key)
	{
		mKeys[key] = true;
	}

	void Input::SetKeyUp(unsigned int key)
	{
		mKeys[key] = false;
	}

	void Input::SetCursorPosition(int x, int y)
	{
		mCursorX = x;
		mCursorY = y;
	}

	bool Input::IsKeyDown(unsigned int key)
	{
		return mKeys[key];
	}

	void Input::GetCursorPosition(int& x, int& y)
	{
		x = mCursorX;
		y = mCursorY;
	}
}

