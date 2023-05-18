#include<iostream>
#include<math.h>
#include<string>
#include<cmath>
#include<vector>
#include<time.h>
using namespace std;

int sum(void)
{ int n;
int k;
int sum=0;
cout<<"how many numbers you want to add"<<endl;
cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<"enter the numbers"<<endl;
    cin>>k;
    sum=sum+k;
}
    return sum;
}

int difference(void)
{
    int x,y;
    cout<<"enter the two numbers A and B"<<endl;
    cin>>x>>y;
    float c;
    if(x>y)
    {
    c=x-y;
      return c;
    }
    else 
    {
        c=y-x;
          return c;
    }
  
}
void power(void)
{
    int x,y,total;
    cout<<"enter the value of base"<<endl;
    cin>>x;
    cout<<"enter the value of power"<<endl;
    cin>>y;
    total=pow(x,y);
    cout<<"The value in powers is ->"<<total<<endl;
}
void root(void)
{
    int x,y,total;
    cout<<"enter the number"<<endl;
    cin>>x;
  //  cout<<"how much root"<<endl;
   // cin>>y;
    total=sqrt(x);
    cout<<"The value in root is ->"<<total<<endl;
}

int multiply(void)
{
    int x,y;
    cin>>x>>y;
    return x*y;
}

int divide(int x,int y)
{
    float c;
    cin>>x>>y;
    c=x/y;
    return c;
}
void sinx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= sin(y);
                         cout<<"the value of sin(x) is ->"<<x<<endl;
}
void asinx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= asin(y);
                         cout<<"the value of arc sin(x) is ->"<<x<<endl;
}
void hxsinx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= sinh(y);
                         cout<<"the value of arc sin(x) is ->"<<x<<endl;
}
void cosx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= cos(y);
                         cout<<"the value of cos(x) is ->"<<x<<endl;
}
void acosx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= acos(y);
                         cout<<"the value of arc cos(x) is ->"<<x<<endl;
}
void hxcosx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= cosh(y);
                         cout<<"the value of arc cos(x) is ->"<<x<<endl;
}
void tanx(void)
{
         double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= tan(y);
                         cout<<"the value of tan(x) is ->"<<x<<endl;
}
void atanx(void)
{
         double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x=atan(y);
                         cout<<"the value of arc tan(x) is ->"<<x<<endl;
}
void hxtanx(void)
{
         double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x=tanh(y);
                         cout<<"the value of arc tan(x) is ->"<<x<<endl;
}
void cosecx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/sin(y);
                         cout<<"the value of cosec(x) is ->"<<x<<endl;
}
void acosecx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/asin(y);
                         cout<<"the value of arc cosec(x) is ->"<<x<<endl;
}
void secx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/cos(y);
                         cout<<"the value of ssec(x) is ->"<<x<<endl;
}
void asecx(void)
{
       double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/cos(y);
                         cout<<"the value of asec(x) is ->"<<x<<endl;
}
void cotx(void)
{
                         double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/tan(y);
                         cout<<"the value of cot(x) is ->"<<x<<endl;
}
void acotx(void)
{
                         double y,x;
                         cout<<"enter the value in radians"<<endl;
                         cin>>y;
                          x= 1/atan(y);
                         cout<<"the value of caot(x) is ->"<<x<<endl;
}
void vectori(void)
{
    float a;
    float b;
    float x;
    cout<<"enter the magnitiude of A vector";
    cin>>a;
    
    cout<<"enter the magnitiude of B vector";
    cin>>b;

    cout<<"enter the value of COS theta "<<endl;
    cin>>x;

    float total=sqrt(pow(a,2)+pow(b,2)+ 2 * a *b *cos(x));
    cout<<"vector sum is"<<total<<endl;
}
void hcf(void)
{
    int numOne, numTwo, mp, temp;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        mp = numOne;
    else
        mp = numTwo;
    temp = mp;
    for(;;mp++)
    {
        if((mp%numOne == 0) && (mp%numTwo == 0))
            break;
    }
    cout<<"\nLCM ("<<numOne<<", "<<numTwo<<") = "<<mp;
    mp = temp;
    for(;;mp--)
    {
        if((numOne%mp == 0) && (numTwo%mp == 0))
            break;
    }
    cout<<"\nHCF ("<<numOne<<", "<<numTwo<<") = "<<mp;
    cout<<endl;
}
void ap (void)
{
    int sum=0;
int n,a,d;
cout<<"how many terms"<<endl;
cin>>n;
cout<<"enter the first term ->"<<endl;
cin>>a;
cout<<"enter the common difference"<<endl;
cin>>d;
       sum = (n * (2 * a + (n - 1) * d)) / 2;
       cout<<"The sum of terms is -> "<<sum<<endl;
}
void gp (void)
{
    float g1,cr,i,n,j;
    int ntrm,gpn;
    float sum=0;
    cout << "\n\n Find the Sum of GP series:\n";
    cout << "-------------------------------\n";
    cout << " Input  the starting number of the G.P. series: ";
    cin >> g1;
    cout << " Input the number of items for  the G.P. series: ";
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: ";
    cin >> cr;
//-------- generate G.P. series ---------------/
     cout<<"\nThe numbers for the G.P. series:\n ";
     cout<<g1<<"  ";
     sum=g1;
     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
        sum=sum+gpn;
        cout<<gpn<<"  ";
       }  
//-------- End of G.P. series generate ---------------/
    cout<<"\n The Sum of the G.P. series:  "<<sum<<endl;	
}

void table(void)
{
     int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
void fact (void)
{
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial<<endl;    
    }
}

void ace(void)
{
        int arr[45]={0};
    int i,j,n;
    int temp=0;
    cout<<"how many elements"<<endl;
    cin>>n;
    
    for ( i = 0; i < n; i++)
    {
        cout<<"arr elements";
      cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];  //popping greater numbers 
            arr[j+1]=temp;
            }
        }
    }
           for ( i = 0; i < n; i++)
    {
      cout<<" "<<arr[i];
    }
}

void dec(void)
{
        int arr[45]={0};
    int i,j,n;
    int temp=0;
    cout<<"how many elements"<<endl;
    cin>>n;
    
    for ( i = 0; i < n; i++)
    {
        cout<<"arr elements";
      cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];  //popping greater numbers 
            arr[j+1]=temp;
            }
        }
    }
           for ( i = 0; i < n; i++)
    {
      cout<<" "<<arr[i];
    }
}
void prime(void)
{
    int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number"<<endl;
  else
    cout << n << " is not a prime number"<<endl;;
}
void sd(void)
{
    int n,sum=0,m;    
cout<<"Enter a number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"Sum is= "<<sum<<endl;    
}

void avg(void)
{
    int i, count, sum, inputArray[500];
    float average;
 
    cout << "Enter number of elements\n";
    cin >> count;
     
    cout << "Enter " << count << " elements\n";
    // Read "count" elements from user
    for(i = 0; i < count; i++) {
        cin >> inputArray[i];
    }
     
    sum = 0;
    // Find sum of all array elements
    for(i = 0; i < count; i++) {
        sum += inputArray[i];
    }
 
    average = (float)sum / count;
    cout << "Average = " << average<<endl;
 
}

void quad(void)
{
    float a,b,c,x1,x2,d,real,imaginary;
  cout<<"Quadratic Equation : ax^2 + bx + c";
  cout<<"\nEnter coefficient of a : ";
  cin>>a;
  cout<<"Enter coefficient of b : ";
  cin>>b;
  cout<<"Enter coefficient of c : ";
  cin>>c;
  d=b*b-4*a*c;
  if(d>0)
  {
    cout<<"Roots are real and distinct";
    x1=(-b + sqrt(d)) / (2*a);
    x2=(-b - sqrt(d)) / (2*a);
    cout<<"\nx1 = "<<x1;
    cout<<"\nx2 = "<<x2;
  }
  else if(d==0)
  {
    cout<<"Roots are real and same";
    x1=(-b + sqrt(d)) / (2*a);
    cout<<"\nx1 = "<<x1;
    cout<<"\nx2 = "<<x1;
  }
  else
  {
    cout<<"Roots are complex and distinct";
    real = -b/(2*a);
    imaginary = sqrt(-d) / (2*a);
    cout<<"\nx1 = "<<real<<"+"<<imaginary<<"i"<<endl;
    cout<<"\nx2 = "<<real<<"-"<<imaginary<<"i"<<endl;
  }
}
void msum(void)
{
    int rows, cols, i, j;
    int one[50][50], two[50][50], sum[50][50];
     
    cout <<"Enter Rows and Columns of Matrix\n";
    cin >> rows >> cols;
      
    cout <<"Enter first Matrix of size "<<rows<<" X "<<cols;
    //  Input first matrix*/
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> one[i][j];
        }
    }
    //  Input second matrix
    cout <<"\nEnter second Matrix of size "<<rows<<" X "<<cols;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> two[i][j];
        }
    }
    /* adding corresponding elements of both matrices 
       sum[i][j] = one[i][j] + two[i][j] */
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = one[i][j] + two[i][j];
        }
    }
      
    cout <<"Sum Matrix\n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
}

void smatix(void)
{
    int matOne[30][30], matTwo[30][30], matSub[30][30], i, j,rows,cols;
    cout <<"Enter Rows and Columns of Matrix\n";
    cin >> rows >> cols;
    // cout<<"Enter Elements for First Matrix: ";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            cin>>matOne[i][j];
    }
    cout<<"Enter Elements for Second Matrix: ";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            cin>>matTwo[i][j];
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            matSub[i][j] = matOne[i][j] - matTwo[i][j];
    }
    cout<<"\nThe New Matrix (Subtraction Result) is:\n";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            cout<<matSub[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
}
void mulmatrix(void)
{
    int a[10][10],b[10][10],mul[10][10],m,c,p,j,k;
cout<<" Enter the number of printing the rows=";
cin>>m;
cout<<"Enter the number of printing the column=";
cin>>c;
cout<<"Enter the first matrix of element=\n";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cin>>a[p][j];
}
}
cout<<"Enter the second matrix of element=\n";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cin>>b[p][j];
}
}
cout<<"multiply of the matrix=\n";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
mul[p][j]=0;
for(k=0;k<c;k++)
{
mul[p][j]+=a[p][k]*b[k][j];
}
}
}
//for printing result
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cout<<mul[p][j]<<" ";
}
cout<<"\n";
}
}
void loge(void)
{
    double x;
    double total=0;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    total=log10(x);
    cout<<"The Value Of Log with base 10 is--->"<<total<<endl;
    
}

/*****************************************
 *****************************************/

int main()
{
    calc:
    char ch;
    int choice,fav,cn,k,l,pp;
    char option;
    
    cout<<"1.Basic Arithematics"<<endl;
    cout<<"2.Trignometric"<<endl;
    cout<<"3.Matrix"<<endl;
    cout<<"4.Special power"<<endl;
    cout<<"5.Special Features"<<endl;
    cout<<"6.EXIT"<<endl;
   
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"Enter Your Choice"<<endl;
    cin>>choice;
    switch(choice)
    { int a,b;
    case 1: ///////////////////////////////////////////////////////////////////////////////////////////////////////////
                       cout<<"1. addition "<<endl;
                       cout<<"2. subtraction"<<endl;
                       cout<<"3. multiplication"<<endl;
                       cout<<"4. division"<<endl;
                       cout<<"5. Power"<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                       cout<<"enter your choice"<<endl;
                         cin>>fav;
        switch(fav)  
        {           
        case 1:
        cout<<"the sum is ->"<<sum()<<endl;
        break;
        case 2:
        cout<<"the difference is ->"<<difference()<<endl;
        break;
        case 3:
        cout<<"the product is ->"<<multiply()<<endl;
        break;
        case 4:
        cout<<"division is ->"<<divide(a,b)<<endl;
        break;
        case 5:
        power();
        break;
        default:
        cout<<"invalid input"<<endl;
        }
        break;
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 2:
                       cout<<"a. sin () "<<endl;
                       cout<<"b. cos ()"<<endl;
                       cout<<"c. tan ()"<<endl;
                       cout<<"d. cosec ()"<<endl;
                       cout<<"e. sec ()"<<endl;
                       cout<<"f. cot ()"<<endl;
                       cout<<"g. arcsin()"<<endl;
                       cout<<"h. arccos()"<<endl;
                       cout<<"i. arctan()"<<endl;
                       cout<<"j. arccosec()"<<endl;
                       cout<<"k. arcsec()"<<endl;
                       cout<<"l. arccot()"<<endl;
                       cout<<"m. hyperbolic sin()"<<endl;
                       cout<<"n. hyperbolic cos()"<<endl;
                       cout<<"o. hyperbolic tan()"<<endl;
                       cout<<"e. exit"<<endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                       cin>>option;
                       switch(option)
                   {
                         case 'a':
                          sinx();
                         break;

                         case 'b':
                        cosx();
                         break;

                         case 'c':
                        tanx();
                         break;

                         case 'd':
                        cosecx();
                         break;

                         case 'e':
                         secx();
                         break;

                         case 'f':
                         cotx();
                         break;

                         case 'g':
                         asinx();
                         break;

                         case 'h':
                         acosx();
                         break;

                         case 'i':
                         atanx();
                         break;

                         case 'j':
                         hxsinx();
                         break;

                         case 'k':
                         hxcosx();
                         break;

                          case 'l':
                         hxtanx();
                         break;                    
                   }
        break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 3:
        cout<<"1. Sum of matrix"<<endl;
        cout<<"2. Subtraction of matrix"<<endl;
        cout<<"3. Multiplication of matrix"<<endl;

        cout<<"Please Enter Your Choice"<<endl;
        cin>>k;
        switch(k)
        {
            case 1:
            msum();
            break;

            case 2:
            smatix();
            break;

            case 3:
            mulmatrix();
            break;

            default:
            cout<<"invalid input"<<endl;
            break;
        }
        break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 4:
                              cout<<"1.power"<<endl;
                              cout<<"2.root"<<endl;
                              cout<<"Enter Your Choice"<<endl;
                              cin>>pp;
                               switch(pp)
                              {
                                
                                case 1:
                                power();
                                break;

                                case 2:
                                root();
                                break;
                              }
        
    

        
        break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // case 5:
        // power();
        // break;
        // case 6:
        // root();
        // break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 5:  
                                                                   
                              cout<<"1.HCF"<<endl;
                              cout<<"2.AP SUM"<<endl;
                              cout<<"3.GP SUM"<<endl;
                              cout<<"4.Logorithm"<<endl;
                              cout<<"5.Vector sum"<<endl;
                              cout<<"6.table writing"<<endl;
                              cout<<"7.factorial"<<endl;
                              cout<<"8.Acending order"<<endl;
                              cout<<"9.Decending Order"<<endl;
                              cout<<"10.Check Prime"<<endl;
                              cout<<"11.Sum of Digit"<<endl;
                              cout<<"12.Average"<<endl;
                              cout<<"13.quadratic root"<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                              cout<<"Enter Your Choice"<<endl;
                              cin>>cn;
                              switch(cn)
                              {
                                
                                case 1:
                                hcf();
                                break;

                                case 2:
                                ap();
                                break;

                                case 3:
                                gp();
                                break;

                                case 4:
                                loge();
                                break;

                                case 5:
                                  vectori();
                                break;

                                case 6:
                              table();
                                break;

                                case 7:
                                fact();
                                break;

                                case 8:
                                ace();
                                break;

                                case 9:
                                dec();
                                break;

                                case 10:
                                prime();
                                break;

                                case 11:
                                sd();
                                break;

                                case 12:
                                avg();
                                break;

                                case 13:
                                quad();
                                break;

                                case 14:
                                cout<<"EXIT"<<endl;
                                break;

                                default:
                                cout<<"invalid input"<<endl;
                              }
        break;
        case 12:
        cout<<"program exitted"<<endl;
        break;
        default:
        cout<<"invalid input try again"<<endl;
        break; 
    }
    cout<<"Do You Want to Continue Y/N"<<endl;
    cin>>ch;
    if(ch=='Y' || ch=='y')
    {
        goto calc;
    }
return 0;
}