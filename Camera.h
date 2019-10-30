#pragma once

namespace Tmpl8
{
class Camera
{
  public:
	mat4 Transform;
	vec3 Pos;
	float Zoom = 1;
	void Update();

  private:
	int Distance = 10;
};

} // namespace Tmpl8