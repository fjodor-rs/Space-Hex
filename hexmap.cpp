#include "precomp.h"

Hexmap::Hexmap() {

}

Hexmap::Hexmap( int width, int heigth ) : width(width), heigth(heigth)
{
	basicHex = new Sprite( new Surface( "assets/basic_hex2.png" ), 1 );
	int t = 0;
	int k = 0;
	Map = new Hex[width * heigth];
	for ( int r = 0; r < heigth; r++ )
	{
		for ( int q = t; q < t + width; q++ )
		{
			Map[( q + ( r / 2 ) ) + 5 * r] = Hex( basicHex, vec2( q, r ) );
		}
		if ( --k % 2 == 0 ) t--;
	}
}

void Hexmap::Update( float deltatime )
{
}

void Hexmap::Draw(Surface *screen)
{
	for ( int i = 0; i < width*heigth; i++ )
	{
		Map[i].Draw(screen);
	}
}

void Hexmap::HandleInput()
{
}
