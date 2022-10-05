#include "ShotSin.h"
#include "game.h"

namespace
{
	constexpr float kShotSpeed = 6.0f;
}

ShotSin::ShotSin()
{
	m_sinRate = 0.0f;
}

void ShotSin::start(Vec2 pos)
{
	ShotBase::start(pos);

	m_vec.x = kShotSpeed;
	m_vec.y = 0.0f;

	m_basePos = pos;
}

void ShotSin::update()
{
	m_basePos += m_vec;
	m_sinRate += 0.5f;

	m_pos = m_basePos;
	m_pos.y += sinf(m_sinRate) * 64.0f;

	if (!m_isExist)	return;
	m_pos += m_vec;
	if (m_pos.x > Game::kScreenWidth)
	{
		m_isExist = false;
	}
}
