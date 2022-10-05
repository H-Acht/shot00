#include "DxLib.h"
#include "ShotSG.h"
#include "game.h"
namespace
{
	constexpr float kShotSpeed = 8.0;
}

ShotSG::ShotSG()
{
	m_pos1.x = 0.0f;
	m_pos1.y = 0.0f;

	m_pos2.x = 0.0f;
	m_pos2.y = 0.0f;

	m_vec1.x = 0.0f;
	m_vec1.y = 0.0f;

	m_vec2.x = 0.0f;
	m_vec2.y = 0.0f;

}

void ShotSG::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_pos1 = pos;
	m_pos2 = pos;

	m_vec.x = kShotSpeed;
	m_vec.y = 0.0f;

	m_vec1.x = kShotSpeed;
	m_vec1.y = 3.0f;

	m_vec2.x = kShotSpeed;
	m_vec2.y = -3.0f;

}

void ShotSG::update()
{
	if (!m_isExist)	return;

	m_pos += m_vec;
	
	m_pos1 += m_vec1;
	
	m_pos2 += m_vec2;

	if (m_pos.x > Game::kScreenWidth)
	{
		m_isExist = false;
	}
}

void ShotSG::draw()
{
	DrawGraphF(m_pos1.x, m_pos1.y, m_handle, true);
	DrawGraphF(m_pos2.x, m_pos2.y, m_handle, true);
}
