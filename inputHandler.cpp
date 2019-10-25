#include "precomp.h"

vec2 InputHandler::mp = vec2( 0, 0 );
vec2 InputHandler::wheel = vec2( 0, 0 );

vec2 InputHandler::MousePos()
{
	return mp;
}

vec2 InputHandler::MouseWheel()
{
	return wheel;
}

bool InputHandler::MouseLeftDown()
{
	return false;
}
bool InputHandler::MouseLeftUp()
{
	return false;
}
bool InputHandler::MouseRightDown()
{
	return false;
}
bool InputHandler::MouseRightUp()
{
	return false;
}