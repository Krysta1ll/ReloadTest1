//ÖØÔØ=ÔËËã·û

#include<iostream>
using namespace std;
class Complex {
private:float Real, Image;
public:Complex(float r=0,float i=0) {
	Real = r;
	Image = i;
}
	  void Show(int i) {
		  cout << "c" << i << "=" << Real << "+" << Image << "i" << endl;
	  }
	  void operator =(Complex& c) {
		  Real = c.Real;
		  Image = c.Image;
	  }
};
void main() {
	Complex c1(-30,45),c2;
	c1.Show(1);
	c2 = c1;
	c2.Show(2);
}