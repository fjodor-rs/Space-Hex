#include "precomp.h"

namespace Tmpl8 {

Sprite *sprite;
vec2 pos;

Hex::Hex()
{
}

Hex::Hex(Sprite *sprite, vec2 pos)
	: sprite(sprite)
	, pos(pos)
{
	float x = sprite->GetWidth();
	float y = sprite->GetHeight();
	size = vec2(floor(x / sqrt(3)), y / 2 );
}

void Hex::Init()
{
}

void Hex::Shutdown()
{

}

void Hex::Update(float deltatime)
{

}

void Hex::Draw(Surface* screen) 
{
	sprite->Draw(screen, size.x * (sqrtf(3) * pos.x + (sqrtf(3)/2) * pos.y), size.y * 3./2 * pos.y);
}

void Hex::HandleInput()
{

}

}