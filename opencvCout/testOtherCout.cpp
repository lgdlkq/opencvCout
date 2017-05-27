#include"all.h"

void otherCoutTest() {

	//1.����������ά��
	Point2f p(6, 2);
	cout << "����ά�㡿p = " << p << ";\n" << endl;

	//2.����������ά��
	Point3f p3f(8, 2, 0);
	cout << "����ά�㡿p3f = " << p3f << ";\n" << endl;

	//3.������������Mat��std::vector
	vector<float> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	cout << "������Mat��vector��shortvec = " << Mat(v) << ";\n" << endl;

	//4.��������std::vector��
	vector<Point2f> points(20);
	for (size_t i = 0; i < points.size(); ++i) points[i] = Point2f((float)(i * 5), (float)(i % 7));
	cout << "����ά��������points = " << points << ";";
}