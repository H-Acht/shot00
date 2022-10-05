#pragma once
#include "ShotBase.h"

class ShotSG : public ShotBase
{
public:
	ShotSG();
	  virtual ~ShotSG() {}

	  virtual void start(Vec2 pos);
	  virtual void update();
	  virtual void draw();
protected:
	Vec2 m_vec1;
	Vec2 m_vec2;
	Vec2 m_pos1;
	Vec2 m_pos2;
};