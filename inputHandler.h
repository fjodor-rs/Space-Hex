#pragma once
namespace Tmpl8
{
class InputHandler
{
  public:
	static vec2 MousePos();
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
	static vec2 mp;
};
} // namespace Tmpl8