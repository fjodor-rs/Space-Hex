#include "precomp.h"

namespace Tmpl8
{
void Camera::Update()
{
	if ( GetAsyncKeyState( 0x57 ) )
	{
		Pos += vec3( 0, Distance / Zoom, 0 );
	}
	if ( GetAsyncKeyState( 0x41 ) )
	{
		Pos += vec3( Distance / Zoom, 0, 0 );
	}
	if ( GetAsyncKeyState( 0x53 ) )
	{
		Pos += vec3( 0, -Distance / Zoom, 0 );
	}
	if ( GetAsyncKeyState( 0x44 ) )
	{
		Pos += vec3( -Distance / Zoom, 0, 0 );
	}
	if (InputHandler::MouseWheel().y > 0) {
		if(Zoom < 10) Zoom += 0.5f;
	}
	if (InputHandler::MouseWheel().y < 0) {
		if ( Zoom > 0.5f ) Zoom -= 0.5f;
	}
	//Zoom kan nog niet want drawScaled is broken
	Transform = mat4::translation(Pos) *				
				mat4::scale(vec3(Zoom, Zoom, 1));
}

} // namespace Tmpl18
