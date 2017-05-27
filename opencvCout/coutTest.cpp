#include<opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void testcout() {

	Mat r = Mat(10, 3, CV_8UC3);
	randu(r, Scalar::all(0), Scalar::all(255));//randu()随机数函数,对r矩阵进行初始化

	//分格一：opencv默认风格
	cout << "r (Opencv默认风格) = " << r << ";" << endl << endl;

	//风格二：Python风格
	//cout << "r (Python风格) = " << format(r, "python") << ";" << endl << endl;//opencv2风格
	cout << "r (Python风格) = " << format(r, Formatter::FMT_PYTHON) << ";" << endl << endl;//opencv3风格

	//风格三：逗号分隔风格（Comma separated values,CSV）
	//cout << "r (逗号分隔风格) = " << format(r, "csv") << ";" << endl << endl;//opencv2风格
	cout << "r (逗号分隔风格) = " << format(r, Formatter::FMT_CSV) << ";" << endl << endl;//opencv3风格

	//风格四：Nummy风格
	//cout << "r (Nummy风格) = " << format(r, "nummy") << ";" << endl << endl;//opencv2风格
	cout << "r (Nummy风格) = " << format(r, Formatter::FMT_NUMPY) << ";" << endl << endl;//opencv3风格

	//风格五：C语言风格
	//cout << "r (C语言风格) = " << format(r, "C") << ";" << endl << endl;//opencv2风格
	cout << "r (C语言风格) = " << format(r, Formatter::FMT_C) << ";" << endl << endl;//opencv3风格
}