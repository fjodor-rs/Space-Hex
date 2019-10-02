#pragma once

namespace Tmpl8
{

class Hex
{
  private:
	Sprite sprite;

  public:
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw();
	void HandleInput();
	vec3 Pos;
};

};
