#pragma once

namespace Tmpl8
{

class Hex
{
  private:
	Sprite *sprite;

  public:
	Hex();
	Hex( Sprite *sprite, vec2 pos );
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw(Surface *screen);
	void HandleInput();
	vec2 pos;
};

};
