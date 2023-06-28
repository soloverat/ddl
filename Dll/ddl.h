#pragma once

#ifndef GAME_API
#define GAME_API __declspec(dllexport)
#else
#define GAME_API __declspec(dllimport)
#endif 

#define __DLL_H__

//#define __DLL_EXPORTS__
//#ifdef __DLL_EXPORTS__
//#define DLLAPI  __declspec(dllexport)
//#else
//#define DLLAPI __declspec(dllimport)
//#endif

namespace GAME
{
	int GAME_API m_game();
}

