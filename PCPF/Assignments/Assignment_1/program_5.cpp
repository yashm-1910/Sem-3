//5. Write a program to find the roots of quadratic equation for the following cases-
//(a) determinant is greater than 0
//(b) determinant is less than 0
//© determinant is equal to 0

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float a, b, c, disc, root1, root2, real_part, img_part;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    disc = pow(b,2) - 4*a*c;

    if (disc > 0)
    {   
        cout << "The roots are real and distinct" << endl;
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        cout << "root1 = " << root1 << " root2 = " << root2 << endl;
    
    }
    else if (disc == 0)
    {
        cout << "The roots are real and same" << endl;
        root1 = (-b)/(2*a);
        cout << "root1 = root2 = " << root1 << endl;

    }
    else{

        cout << "The roots are imaginary and distinct" << endl;
        real_part = (-b)/(2*a);
        img_part =sqrt(-disc)/(2*a);
        cout << "x1 = " << real_part << "+" << img_part << "i" << endl;
        cout << "x2 = " << real_part << "-" << img_part << "i" << endl;

    }

    return 0;

}
