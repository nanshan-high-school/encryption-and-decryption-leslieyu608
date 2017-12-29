#include <iostream>

using namespace std;

int main() {
	int num = 0, order = 0;
	char input[100];
	
	cout << "要加密還解密(加密請按1, 解密請按2):";
	cin >> order;
	
	cout << "輸入要解/加密的字元:";
	cin >> input;
	
	cout << "要位移幾個字母:";
	cin >> num;
  
	for (int i = 0; order != 1 && input[i] != '\0'; i++) {
		input[i]-=num;
		
		if ((input[i] < 'A' && input[i] >= 'A'-num) || (input[i] < 'a' && input[i] >= 'a'-num)) {
			input[i]+=26;
	  }
	}
	
	for (int i = 0; order != 2 && input[i] != '\0'; i++) {
		input[i]+=num;
		
		if ((input[i] > 'Z' && input[i] <= 'Z'+num) || (input[i] > 'z' && input[i] <= 'z'+num)) {
			input[i]-=26;
	  }
	}
	
	cout << input;
}