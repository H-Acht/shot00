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
	//サインカーブ移動用
	Vec2 m_basePos;
	float m_sinRate;

};