#include<iostream>
#include<iomanip>
using namespace std;

class Math 
{
public:
    double a, a2, b, b1, b2, c, c1, c2, d , d1, d2, s, s1, t, t2, u, u2, v ,v2, r1, r2, i;
    int ch;
    void choice() 
    {
        cout << "\nType the serial number of the required operation\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square root of a number\n6. Sine\n7. Cosine\n8. Tangent\n9. Logarithm\n10. Roots of Quadratic Equation\n11. Factorial\nType any other key to exit\n";
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
            case 9: logarithm(); break;
            case 10: quadratic(); break;
            case 11: factorial(); break;
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
                i=i+0.01;
            }
        i=i-0.02;
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
        else 
        {
            s = 1;
            for (int i = 1; i <= a; i++) 
            {
                s *= i;
            }
                cout << "Factorial of " << a << " is " << s;
        }
        choice2();
    }

    int factorial2(int c)
    {
        s1 = 1;
            for (int i = 1; i <= c; i++) 
            {
                s1 *= i;
            }
            return(s1);
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
        for(i=0;i<10;i++)
        {
            b=(2*i)+1;
            c1 += t / factorial2(b);
            t=t2*t;
        }
        cout<<"sin("<<a2<<")="<<c1<<endl;
        choice2();
    }

    double sine2(double a) 
    {
        c1=0;    
        t2=a*a*(-1);
        t=a;
        for(i=0;i<10;i++)
        {
            b=(2*i)+1;
            c1 += t / factorial2(b);
            t=t2*t;
        }
        return(c1);
        
    }

    void cosine() 
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        c2=1;
        u=1;
        u2=a*a*(-1);
        for(int i=1;i<10;i++)
        {
            u=u*u2;
            c2+=u/factorial2(2*i);
        }
        cout<<"cos("<<a2<<")="<<c2<<endl;
        choice2();
        
    }

    double cosine2(double a) 
    {
        c2=1;
        u=1;
        u2=a*a*(-1);
        for(int i=1;i<10;i++)
        {
            u=u*u2;
            c2+=u/factorial2(2*i);
        }
        return(c2);
    }

    void tangent()
    {
        cout<<"\nEnter angle in degrees\n";
        cin>>a;
        a2=a;
        a=a*0.0174532925;
        c1=sine2(a);
        c2=cosine2(a);
        double c3=c1/c2;
        cout<<"Tan("<<a2<<")="<<c3;
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
};

int main() 
{
    Math ob;
    ob.choice();
    return 0;
}
