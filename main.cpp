#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int hrs;
	int mins;
	double speed;
	bool done = false;
	cout << "*******************************" << endl;
	cout << "***PLAYBACK SPEED CALCULATOR***" << endl;
	cout << "*******************************" << endl << endl;
	cout << "How long is the video at 1.0x playback speed?" << endl;
	cout << "Input hours: ";
	cin >> input;
	while (!done) {
		try {
			hrs = stoi(input); done = true;
		} catch(const invalid_argument& error) {
			cout << endl << "Invalid input. Please enter an int value: ";
		     	cin >> input;	
		}
	}	
	done = false;
	cout << "Input minutes: ";
	cin >> input;
	while (!done) {
		try {
			mins = stoi(input); done = true;
		} catch(const invalid_argument& error) {
			cout << endl << "Invalid input. Please enter an int value: ";
		     	cin >> input;	
		}
	}
	done = false;
	cout << "Input playback speed: ";
	cin >> input;
	while (!done) {
		try {
			speed = stod(input); done = true;
		} catch(const invalid_argument& error) {
			cout << endl << "Invalid input. Please enter an int value: ";
		     	cin >> input;	
		}
	}
	done = false;
	int total = (hrs*60) + mins;
	double result = total/speed;
	double resmin = result;
	double reshr = 0;
	cout << endl << "--------------------" << endl;
	if (resmin >= 60) {
		while (resmin >= 60) {
			reshr += 1;
			resmin -= 60;
		}
	}
	if (reshr > 0) {
		cout << reshr << " hour(s) and " << resmin << " minute(s)." << endl;
	} else if (resmin > 0) {
		cout << resmin << " minute(s)." << endl;
	}
	cout << "--------------------" << endl;
	return 0;
}