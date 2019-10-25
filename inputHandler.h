#pragma once
namespace Tmpl8
{
class InputHandler
{
  public:
	static vec2 MousePos();
	static vec2 MouseWheel();
	static bool MouseLeftDown();
	static bool MouseLeftUp();
	static bool MouseRightDown();
	static bool MouseRightUp();
	static void MouseUp( int button )
	{ /* implement if you want to detect mouse button presses */
	}
	static void MouseDown( int button )
	{ /* implement if you want to detect mouse button presses */
	}
	static void MouseMove( int x, int y )
	{ /* implement if you want to detect mouse movement */
		mp = vec2( x, y );
	}
	static void KeyUp( int key )
	{ /* implement if you want to handle keys */
	}
	static void KeyDown( int key )
	{ /* implement if you want to handle keys */
	}
	static void MouseWheelMove(float x, float y)
	{
		wheel = vec2(x, y);
	}
	
	static vec2 mp;
	static vec2 wheel;
};
} // namespace Tmpl8