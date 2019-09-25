#pragma once

namespace Tmpl8
{

class Hexmap
{

  public:
	void Init();
	void Shutdown();
	void Update( float deltatime );
	void Draw();
	void HandleInput();

};

}; // namespace Tmpl8