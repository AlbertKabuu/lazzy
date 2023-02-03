#include <iostream>

using namespace std;

class TPen{
	// private:
		// string _color;
		
	public:
		// void setColor(int _colorcode);
		// string getColor();
		string color;
};

// void setColor(int _colorcode){
	// _color = colorcode
// }

int main(){
	TPen pen;
	cout << "Hello"<<endl;
	
	pen.color = "red";
	cout << pen.color;
}