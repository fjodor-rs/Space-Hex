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
	sprite->Draw(screen, pos.x, pos.y);
}

void Hex::HandleInput()
{

}

}