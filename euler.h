/*
 * @Author: Lychee
 * @Date: 2022-10-27 21:31:07
 * @Editor: Lychee
 * @Description: create the file
 */
#pragma once
#include "HalfEdge.h"



	Solid* mvfs(Point *p);
	HalfEdge* mev(Point *oldPoint, Point *newPoint, Loop *lp);
	Loop* mef(Point *p1, Point *p2, Loop *lp);
	Loop* kemr(Point *p1, Point *p2, Loop *lp);
	void kfmrh(Loop *OuterLp ,Loop *InnerLp);
	void sweeping (Face *face ,Point *sweepPoint);
	Solid* getSolid();
	Solid * getSolid1();
	void saveVertexToCoord(Solid *solid, double verCoord[1000][3]);
	void output(Solid *solid);//Êä³ö