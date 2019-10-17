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
	sprite->Draw(screen, 73 * (sqrtf(3) * pos.x + (sqrtf(3)/2) * pos.y), 62 * 3./2 * pos.y);
}

void Hex::HandleInput()
{

}

}