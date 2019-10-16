#include "precomp.h" // include (only) this in every .cpp file

// -----------------------------------------------------------
// Initialize the application
// -----------------------------------------------------------
Hex *kaas;
Sprite *basicHex;
Hex *hexMap;

void Game::Init()
{
	/*

	https://www.redblobgames.com/grids/hexagons/#map-storage

	basicHex = new Sprite( new Surface( "assets/basic_hex2.png" ), 1 );
	kaas = new Hex(basicHex, vec2 (100, 100));
	hexMap = new Hex[15];
	int t = 0;
	int k = 0;
	for ( int i = 0; i < 3; i++ )
	{
		for ( int j = t; j < t + 5; j++ )
		{
			hexMap[j + 5 * ( i + ( j / 2 ) )] = Hex(basicHex, vec2(j,i));
			if(k-- & 2 == 0)t--;
		}
	}
	*/
}

// -----------------------------------------------------------
// Close down application
// -----------------------------------------------------------
void Game::Shutdown()
{
}
// -----------------------------------------------------------
// Main application tick function
// -----------------------------------------------------------
void Game::Tick( float deltaTime )
{
	// clear the graphics window
	screen->Clear( 0xff000000 );
	// print something in the graphics window
	screen->Print( "hello world", 2, 2, 0xffffff );
	// draw a sprite
	kaas->Draw(screen);
	//printf("%s",InputHandler::MousePos());
	//printf("%",InputHandler::MousePos());
	cout << "(" << InputHandler::MousePos().x << ", " << InputHandler::MousePos().y << ")" << endl;
	
}
