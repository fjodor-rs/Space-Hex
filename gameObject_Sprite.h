#pragma once

namespace Tmpl8
{

class SpriteObject : GameObject
{

  public:
	vec2 Pos;
	void Draw();
	GameObject *Parent;
	GameObject *Children;
};

}; // namespace Tmpl8