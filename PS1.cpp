#include<iostream>
#include<iomanip>
using namespace std;

class Math 
{
public:
    double a, a2, b, b1, b2, c, c1, c2, c3, d , d1, d2, s, s1, t, t2, r1, r2, i;
    int ch;
    void choice() 
    {
        cout << "\nType the serial number of the required operation\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square root of a number\n6. Sine\n7. Cosine\n8. Tangent\n9. Cosecant\n10. Secant\n11. Cotangent\n12. Logarithm\n13. Roots of Quadratic Equation\n14. Factorial\n15. Permutation\n16. Combination\nType any other key to exit\n";
        cin >> ch;
        switch(ch) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: root(); break;
            case 6: sine(); break;
            case 7: cosine(); break;
            case 8: tangent(); break;
            case 9: cosecant(); break;
            case 10: secant(); break;
            case 11: cotangent(); break;
            case 12: logarithm(); break;
            case 13: quadratic(); break;
            case 14: factorial(); break;
            case 15: permutation(); break;
            case 16: combination(); break;
            default: exit(0);
        }
    }

    void choice2() 
    {
        cout << "\nType 1 to go to the main menu\nType 2 to exit\n";
        cin >> ch;
        if (ch == 1) {
            choice();
        } else {
            exit(0);
        }
    }

    void add() 
    {
        cout << "Enter two numbers\n";
        cin >> a >> b;
        cout << a << " + " << b << " = " << a + b;
        choice2();
    }

    void subtract() 
    {
        cout << "Enter two numbers\n";
        cin >> a >> b;
        cout << a << " - " << b << " = " << a - b;
        choice2();
    }

    void multiply() 
    {
        cout << "Enter two numbers\n";
        cin >> a >> b;
        cout << a << " * " << b << " = " << a * b;
        choice2();
    }

    void divide() 
    {
        cout << "Enter dividend and divisor\n";
        cin >> a >> b;
        if (b == 0) 
        {
            cout << "Divide by 0 is not possible\n";
        } else 
        {
            cout << a << " / " << b << " = " << a / b;
        }
        choice2();
    }

    void root() 
    {
        cout<<"Enter a number\n";
        cin>>a;
        if(a>=0)
        {
            d1=1;
            d2=1;
            i=0;
            while(d1>0)
            {
                d1=a-(i*i);
                i++;
            }
                i=i-2;
                while(d2>0)
            {
                d2=a-(i*i);
                i=i+0.01;
            }
            i=i-0.02;
            cout<<"\nSquare root of "<<a<<" = "<<i ;
            choice2();
        }
        else
        { 
            cout<<"Inavlid input!";
            choice2();
        }
    }

    double root2(double a)
    {
        d1=1;
        d2=1;
        i=0;
        while(d1>0)
        {
            d1=a-(i*i);
            i++;
        }
        i=i-2;
            while(d2>0)
            {
                d2=a-(i*i);
                i=i+0.001;
            }
        i=i-0.002;
        return(i);
    }

    void logarithm() 
    {
        cout << "Enter a number\n";
        cin >> a;
        if (a <= 0)
    {
        cout << "Invalid Input";
    } 
    else 
    { //Using Newton-Mercator Series
        s=0;
        t=(a-1)/(a+1);
        t2=t*t;
        for(i=0;i<=10000;i++)
        {
            s=s+(1/((2*i)+1))*t;
            t=t2*t;
        }
        cout<<"Logarithm of "<<a<<" is "<<2*s;
        choice2();
    }
        choice2();
    }

    void factorial() 
    {
        cout << "Enter a non-negative integer number\n";
        cin >> a;
        if (a < 0) 
        {
            cout << "Invalid Input";
        } 
        else if(a==0)
        {
             cout << "Factorial of " << a << " is " << 1;
        }
        else 
        {
            s = 1;
            for (float i = 1; i <= a; i++) 
            {
                s *= i;
            }
                cout << "Factorial of " << a << " is " << s;
        }
        choice2();
    }

    float factorial2(float c)
    {
        s1 = 1;
        if(c==0)
        {
            return(s1);
        }
        else
        {
        for (float i = 1; i <= c; i++) 
        {
            s1 *= i;
        }
        return(s1);
        }
    }


    void sine() 
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        c1=0;
        t2=a*a*(-1);
        t=a;
        for(i=0;i<20;i++)
        {
            b=(2*i)+1;
            c1 += t / factorial2(b);
            t=t2*t;
        }
        cout<<"sin("<<a2<<")="<<c1<<endl;
        choice2();
    }

    void sine2() 
    {
        c1=0;    
        float t2=a*a*(-1);
        t=a;
        for(i=0;i<20;i++)
        {
            float b=(2*i)+1;
            c1 += t / factorial2(b);
            t=t2*t;
        }
        
    }

    void cosine() 
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        c2 = 0;
        t2 = a * a * (-1);
        t = 1;
        for (i = 0; i < 20; i++) 
        {
        b = 2 * i;
        c2 += t / factorial2(b);
        t = t2 * t;
        }
        cout<<"cos("<<a2<<")="<<c2<<endl;
        choice2();
     }

    void cosine2() 
    {
        c2 = 0;
        t2 = a * a * (-1);
        t = 1;
        for (i = 0; i < 20; i++) 
        {
        b = 2 * i;
        c2 += t / factorial2(b);
        t = t2 * t;
        }
    }

    void tangent()
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        sine2();
        cosine2();
        double c3=c1/c2;
        cout<<"Tan("<<a2<<")="<<c3;
        choice2();
    }

    void tangent2()
    {
        sine2();
        cosine2();
        c3=c1/c2;
    }

    void cosecant()
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        sine2();
        cout<<"cosec("<<a2<<")="<<1/c1;
        choice2();
    }

    void secant()
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        cosine2();
        cout<<"sec("<<a2<<")="<<1/c2;
        choice2();
    }

    void cotangent()
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        tangent2();
        cout<<"cot("<<a2<<")="<<1/c3;
        choice2();

    }

    void quadratic() 
    {
        cout << "Enter coefficients a, b, and c for the equation ax^2 + bx + c = 0\n";
        cin >> a >> b >> c;
        d = b*b - 4*a*c;
        if(d > 0) 
        {
            r1 = (-b + root2(d)) / (2*a);
            r2 = (-b - root2(d)) / (2*a);
            cout << "Roots are real and different.\n";
            cout << "Root 1 = " << r1 << "\nRoot 2 = " << r2;
        } 
        else if(d == 0) 
        {
            r1 = -b / (2*a);
            cout << "Roots are real and same.\n";
            cout << "Root = " << r1;
        } 
        else 
        {
            double rp = -b / (2*a);
            double ip = root2(-d) / (2*a);
            cout << "Roots are complex and different.\n";
            cout << "Root 1 = " << rp << " + " << ip << "i\n";
            cout << "Root 2 = " << rp << " - " << ip << "i\n";
        }
        choice2();
    }
    void combination()
    {
        int N,R;
        cout<<"Enter n and r term of nCr"<<endl;
        cin>>N>>R;
        if(N<R||N<0||R<0)
        {
            cout<<"Invalid input!(n>=r)";
            combination();
        }
        else
        {
        cout<<N<<"C"<<R<<"="<<factorial2(N)/((factorial2(N-R))*factorial2(R))<<endl;
        choice2();
        }
    }

    void permutation()
    {
        int N,R;
        cout<<"Enter n and r term of nPr"<<endl;
        cin>>N>>R;
        if(N<R||N<0||R<0)
        {
            cout<<"Invalid input!(n>=r and n,r>0)\n";
            permutation();
        }
        else
        {
        cout<<N<<"P"<<R<<"="<<factorial2(N)/factorial2(N-R)<<endl;
        choice2();
        }
    }
};

int main() 
{
    Math ob;
    ob.choice();
    return 0;
}
