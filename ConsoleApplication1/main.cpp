#include <iostream>
#include <string>
using namespace std;

string* penis;

float Probabilidade(float want, float possible) {

	float* result;

	result = &want;

	float prob = *result / possible;

	return prob;
}


void main() {


	float result = Probabilidade(1, 6);

	cout << result;

}


