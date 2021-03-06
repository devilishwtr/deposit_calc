#include <iostream>
using namespace std;

int inputCheck (int term, int dep) {
    if (term <=0 || term > 365 && dep <=0) return 1;
    return 0;
}

int termCacl(int term, int dep){
    float sum;
    float bonus = 0;
    if (dep > 10000) bonus = 0.01;
    if (term >= 0 && term <= 30) sum = dep*0.9;
    else if (term >= 31 && term <= 120 ) sum = dep * (1.02 + bonus);
    else if (term >= 121 && term <= 240 ) sum = dep * (1.06 + bonus*2);
    else if (term >= 241 && term <= 365 ) sum = dep * (1.12 + bonus*3);
    return sum;
}

int main() {
    int term, dep;
    do {
    cout << "Enter the deposit term\n";
    cin >> term;
    cout << "Enter the deposit amount\n";
    cin >> dep;
    } while (inputCheck(term,dep));
    cout << "Total amount = "<< termCacl(term,dep) <<endl;
    ;
    system("pause");
    return 0;
}