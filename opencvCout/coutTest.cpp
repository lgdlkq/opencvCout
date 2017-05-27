#include<opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void testcout() {

	Mat r = Mat(10, 3, CV_8UC3);
	randu(r, Scalar::all(0), Scalar::all(255));//randu()���������,��r������г�ʼ��

	//�ָ�һ��opencvĬ�Ϸ��
	cout << "r (OpencvĬ�Ϸ��) = " << r << ";" << endl << endl;

	//������Python���
	//cout << "r (Python���) = " << format(r, "python") << ";" << endl << endl;//opencv2���
	cout << "r (Python���) = " << format(r, Formatter::FMT_PYTHON) << ";" << endl << endl;//opencv3���

	//����������ŷָ����Comma separated values,CSV��
	//cout << "r (���ŷָ����) = " << format(r, "csv") << ";" << endl << endl;//opencv2���
	cout << "r (���ŷָ����) = " << format(r, Formatter::FMT_CSV) << ";" << endl << endl;//opencv3���

	//����ģ�Nummy���
	//cout << "r (Nummy���) = " << format(r, "nummy") << ";" << endl << endl;//opencv2���
	cout << "r (Nummy���) = " << format(r, Formatter::FMT_NUMPY) << ";" << endl << endl;//opencv3���

	//����壺C���Է��
	//cout << "r (C���Է��) = " << format(r, "C") << ";" << endl << endl;//opencv2���
	cout << "r (C���Է��) = " << format(r, Formatter::FMT_C) << ";" << endl << endl;//opencv3���
}