#pragma once

namespace Tmpl8
{

class SpriteObject : public GameObject
{

  public:
	virtual void Init();
	virtual void Shutdown();
	virtual void Update( float deltatime );
	virtual void HandleInput();
	vec2 Pos;
	void Draw();
	GameObject *Parent;
	vector<GameObject> *Children; // pushback = add, enhanced for loop (aka foreach in c++)
	
};

}; // namespace Tmpl8