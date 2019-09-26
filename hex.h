#pragma once

namespace Tmpl8
{

class Hex
{
  private:
	Sprite sprite;
	int x, y, z;

  public:
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw();
	void HandleInput();
	int X, Y, Z;
};

};