/*
 * @Author: Lychee
 * @Date: 2022-10-25 14:09:02
 * @Editor: Lychee
 * @Description: create the file
 */
#pragma once

class Solid;
class Face;
class Loop;
class HalfEdge;
class Vertex;
class Edge;
class Point;


class Solid 
{
public:
	int num_solid;
	Solid *prevs;
	Solid *nexts;
	Face *sface;
	Edge *sedge; 
	Vertex *svertex;

public:
	Solid(); 
	bool addVertex(Vertex *vertex);
	bool addEdge(Edge *edge);
	bool addFace(Face *face);
	Vertex* findVertex(Point *p);

};

class Face 
{
public:
	int num_face;
	Solid *fsolid; 
	Face *prevf;
	Face *nextf;
	Loop *floop;

public:
	Face();
	bool addLoop(Loop *lp);

};

class Loop
{
public:
	int num_loop;
	Face *lface;
	Loop *prevl;
	Loop *nextl;
	HalfEdge *lhedg; 
public:
	Loop();
	bool addHalfEdge(HalfEdge *he);
	HalfEdge *findHe(Vertex *v);
};

class HalfEdge {
public:
	Loop *hloop;
	HalfEdge *prev;
	HalfEdge *next;
	HalfEdge *adjacent; 
	Edge *edge;
	Vertex *startv;
	Vertex *endv;

public:
	HalfEdge();
};

class Edge
{
public:
	Edge *preve;
	Edge *nexte;
	HalfEdge *he1;
	HalfEdge *he2;

public:
	Edge();
};

class Point
{
public:
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);
	Point& operator= (const Point & p);

};

class Vertex 
{
public:
	int num_vertex;
	Vertex *prevv;
	Vertex *nextv;
	Point point;

public:
	Vertex();

};
