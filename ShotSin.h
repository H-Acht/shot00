#pragma once
#include"ShotBase.h"

class ShotSin : public ShotBase
{
public:
	ShotSin();
	virtual ~ShotSin() {}

	virtual void start(Vec2 pos) ;
	virtual void update();

protected:
	//�T�C���J�[�u�ړ��p
	Vec2 m_basePos;
	float m_sinRate;

};