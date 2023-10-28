// C++ implementation of above approach
#include <iostream>
using namespace std;

struct Point // points
{
	int x;
	int y;
};

// determines the orientation of points
int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

	if (val == 0)
		return 0;
	return (val > 0) ? 1 : 2;
}

// check whether the distinct line segments intersect
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);

	if (o1 != o2 && o3 != o4)
		return true;

	return false;
}

// check if points overlap(similar)
bool similar(Point p1, Point p2)
{

	// it is same, we are returning false because
	// quadrilateral is not possible in this case
	if (p1.x == p2.x && p1.y == p2.y)
		return false;

	// it is not same, So there is a
	// possibility of a quadrilateral
	return true;
}

// check for collinearity
bool collinear(Point p1, Point p2, Point p3)
{
	int x1 = p1.x, y1 = p1.y;
	int x2 = p2.x, y2 = p2.y;
	int x3 = p3.x, y3 = p3.y;

	// it is collinear, we are returning false
	// because quadrilateral is not possible in this case
	if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2))
		return false;

	// it is not collinear, So there
	// is a possibility of a quadrilateral
	else
		return true;
}

int no_of_quads(Point p1, Point p2, Point p3, Point p4)
{
	// ** Checking for cases where no quadrilateral = 0 **

	// check if any of the points are same
	bool same = true;
	same = same & similar(p1, p2);
	same = same & similar(p1, p3);
	same = same & similar(p1, p4);
	same = same & similar(p2, p3);
	same = same & similar(p2, p4);
	same = same & similar(p3, p4);

	// similar points exist
	if (same == false)
		return 0;

	// check for collinearity
	bool coll = true;
	coll = coll & collinear(p1, p2, p3);
	coll = coll & collinear(p1, p2, p4);
	coll = coll & collinear(p1, p3, p4);
	coll = coll & collinear(p2, p3, p4);

	// points are collinear
	if (coll == false)
		return 0;

	//** Checking for cases where no of quadrilaterals= 1 or 3 **

	int check = 0;

	if (doIntersect(p1, p2, p3, p4))
		check = 1;
	if (doIntersect(p1, p3, p2, p4))
		check = 1;
	if (doIntersect(p1, p2, p4, p3))
		check = 1;

	if (check == 0)
		return 3;
	return 1;
}

// Driver code
int main()
{
	struct Point p1, p2, p3, p4;
	// A =(0, 9), B = (-1, 0), C = (5, -1), D=(5, 9)
	p1.x = 0, p1.y = 9;
	p2.x = -1, p2.y = 0;
	p3.x = 5, p3.y = -1;
	p4.x = 5, p4.y = 9;
	cout << no_of_quads(p1, p2, p3, p4) << endl;

	// A=(0, 9), B=(-1, 0), C=(5, -1), D=(0, 3)
	p1.x = 0, p1.y = 9;
	p2.x = -1, p2.y = 0;
	p3.x = 5, p3.y = -1;
	p4.x = 0, p4.y = 3;
	cout << no_of_quads(p1, p2, p3, p4) << endl;

	// A=(0, 9), B=(0, 10), C=(0, 11), D=(0, 12)
	p1.x = 0, p1.y = 9;
	p2.x = 0, p2.y = 10;
	p3.x = 0, p3.y = 11;
	p4.x = 0, p4.y = 12;
	cout << no_of_quads(p1, p2, p3, p4) << endl;

	// A=(0, 9), B=(0, 9), C=(5, -1), D=(0, 3)
	p1.x = 0, p1.y = 9;
	p2.x = 0, p2.y = 9;
	p3.x = 5, p3.y = -1;
	p4.x = 0, p4.y = 3;
	cout << no_of_quads(p1, p2, p3, p4) << endl;

	return 0;
}
