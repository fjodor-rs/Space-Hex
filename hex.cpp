#include "precomp.h"

namespace Tmpl8
{

Sprite *sprite;
vec2 pos;

Hex::Hex()
{
}

Hex::Hex( Sprite *sprite, vec2 pos )
	: sprite( sprite ), pos( pos )
{
	width = sprite->GetWidth();
	height = sprite->GetHeight();
	size = vec2( floor( width / sqrt( 3 ) ), height / 2 );
}

void Hex::Init()
{
}

void Hex::Shutdown()
{
}

void Hex::Update( float deltatime )
{
}

void Hex::Draw( Surface *screen, mat4 cam )
{
	float x = size.x * ( sqrtf( 3 ) * pos.x + ( sqrtf( 3 ) / 2 ) * pos.y );
	float y = size.y * 3. / 2 * pos.y;

	vec3 position = vec3(x, y, 0);
	vec3 posCorrect = cam * position;
	//sprite->Draw( screen, posCorrect.x, posCorrect.y );
	sprite->DrawScaled(posCorrect.x, posCorrect.y, width * cam.cell[0], height * cam.cell[0], screen);
}

void Hex::HandleInput()
{
}

} // namespace Tmpl8