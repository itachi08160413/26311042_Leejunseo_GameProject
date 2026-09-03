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
	int m_txMario = -1;
};

