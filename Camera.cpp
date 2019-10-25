#include "precomp.h"

namespace Tmpl8
{
void Camera::Update()
{
	if ( GetAsyncKeyState( 0x57 ) )
	{
		Pos += vec3( 0, 10, 0 );
	}
	if ( GetAsyncKeyState( 0x41 ) )
	{
		Pos += vec3( 10, 0, 0 );
	}
	if ( GetAsyncKeyState( 0x53 ) )
	{
		Pos += vec3( 0, -10, 0 );
	}
	if ( GetAsyncKeyState( 0x44 ) )
	{
		Pos += vec3( -10, 0, 0 );
	}
	//Zoom kan nog niet want drawScaled is broken
	Transform = mat4::translation(Pos) *				
				mat4::scale(vec3(Zoom, Zoom, 1));
}

} // namespace Tmpl18
