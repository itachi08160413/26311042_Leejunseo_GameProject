#include <vector>
#include "glc2d.h"

#pragma once
class SceneGameBegin
{
public:
	int Init();
	int Render();
	int Update();
	int Destroy();

protected:
	// game texture
	int m_txPlayer = -1;
	int m_txBackground = -1;
	VEC2 m_txBackgroundsize{ 0.4, 0.6 };
};

