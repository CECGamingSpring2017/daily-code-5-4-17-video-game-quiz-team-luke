#include <iostream>
using namespace std;

int main() {
	int smash=0, oblivion=0, NFS=0;
	int input;
	cout << "How much do you like fighting?(number)" << endl;
	cin>> input;
	smash = input;
	cout << "How much do you like adventure?(number)" << endl;
	cin >> input;
	oblivion = input;
	cout << "How much do you like racing?(number)" << endl;
	cin >> input;
	NFS = input;

	if (smash > oblivion&&NFS)
		cout << "You should play smash bro!" << endl;

	if (oblivion > smash&&NFS)
		cout << "You should play oblvion dude!" << endl;

	if (NFS > smash&&oblivion)
		cout << "You should play need for speed bro!" << endl;

	system("pause");

}