#pragma once

namespace Tmpl8
{

class Hexmap
{

  public:
	Hexmap( int width, int heigth );
	Hexmap();
	void Update( float deltatime );
	void Draw( Surface *screen, mat4 cam );
	void HandleInput();
	Hex *Map;

  private:
	Sprite *basicHex;
	int width;
	int heigth;
};

}; // namespace Tmpl8