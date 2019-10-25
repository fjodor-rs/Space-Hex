#pragma once

namespace Tmpl8
{

class Hex
{
  private:
	Sprite *sprite;
	vec2 size;
	float width;
	float height;

	public:
	Hex();
	Hex( Sprite *sprite, vec2 pos );
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw( Surface *screen, mat4 cam );
	void HandleInput();
	vec2 pos;
};

}; // namespace Tmpl8
