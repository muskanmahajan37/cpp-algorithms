#include <iostream>
//this application creates a pyramid of digits

using namespace std;

void character(int n, char symb){

    for(int i = 0; i < n; i++)
        cout << symb;
}

void ascendant(int n){

    for(int i = 1; i <= n; i++)
        cout << i;
}

void descendant(int n){

    for(int i = n; i >= 1; i--)
        cout << i;
}

void line(int f, int nf){
    character(nf-f,' ');
    ascendant(f);
    descendant(f-1);
    cout<<endl;
}

void triangle(int nf){
    for(int f=1;f<=nf;f++)
        line(f,nf);
}

int main(){

    cout<<"Enter number of lines: ";
    int n_lines;
    cin>>n_lines;
    //show lines until 9 if was greater than 9 not show anything
    if(n_lines<10)
        triangle(n_lines);
}
