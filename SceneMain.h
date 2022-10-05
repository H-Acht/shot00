#pragma once

#include "player.h"
#include "ShotSG.h"
#include "ShotNormal.h"
#include "ShotSin.h"

class SceneMain
{
public:
	SceneMain();
	virtual ~SceneMain();

	// 初期化
	void init();
	// 終了処理
	void end();

	// 毎フレームの処理
	void update();
	// 毎フレームの描画
	void draw();
	
	//弾の生成
	bool createShotSG(Vec2 pos);
	bool createShotNormal(Vec2 pos);
	bool createShotSin(Vec2 pos);
private:
	// ショットの最大数
	static constexpr int kShotMax = 64;

private:
	// プレイヤーのグラフィックハンドル
	int m_hPlayerGraphic;
	int m_hShotGraphic;
	// プレイヤー
	Player m_player;
	// ショット
	//ShotBase* m_pShot[kShotMax];

	ShotSG* m_pShotSG[kShotMax];
	ShotNormal* m_pShotNormal[kShotMax];
	ShotSin* m_pShotSin[kShotMax];
};