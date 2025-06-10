#include <iostream>
using namespace std;
int main(){
    float weight, height;
    cin >> weight >> height;
    float BMI = weight / (height * height);
    cout << "Your BMI is " << BMI;
    return 0;
}