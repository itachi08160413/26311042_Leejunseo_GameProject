#include "glc2d.h"
#include "SceneGameBegin.h"

int SceneGameBegin::Init()
{
    m_txBackground = g2_TextureLoad("Resource/GameStartBackgournd.png");
    return 0;
}

int SceneGameBegin::Render()
{
    g2_Draw2D(m_txBackground, nullptr, nullptr, &m_txBackgroundsize);
    return 0;
}

int SceneGameBegin::Update()
{
    return 0;
}

int SceneGameBegin::Destroy()
{
    return 0;	
}
