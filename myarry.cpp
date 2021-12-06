#include <iostream>
using namespace std;
class myArray{ // 102135
  static const int MAX = 100;
  double a[MAX];
  int n = 0;//prevent runtime error
  public:
  double get(const int index = 0 ){
    if(index < n) return a[index];
    cout << "Error get myArray" 
         << endl;
    return 0;
  }
  void set(const int index, 
           const double value){
    if( index < n ) a[index] = value;
    cout << "Error set myArray" 
         << endl;
  }
  explicit myArray(const double* ma=nullptr, 
          int k = 0){
    if( k > MAX ) 
      k = MAX ;
    for(n = k--; k >= 0; k--)
      a[k] = ma[k];
  }
  myArray(const myArray& b){
    arr <- n;
    cout << "copy construcotr" 
         << endl;
  }
  ~myArray(){
    cout << "Destructor" << endl;
  }
  void print(void){
    cout << " n = " << n << endl;
    for(int i = 0; i < n; i++)
      cout << "a[" << i << "] = " 
           << a[i] << endl;
  }
  myArray operator=(myArray& arr){
    n=n.arr;
    for(int i=0 ; i<arr.n ; i++)
    a[i]=arr.a[i];
    cout << "operator=" << endl;
    return *this;
  }
  friend myArray operator*(const myArray a[],const myArray b[]);
  friend bool operator>(const myArray a[],const myArray b[]);
  friend ostream& operator<<(ostream &output, const complexCls &A){
    output << "n= " << n << endl;
    for(int i=0; i<A.n; i++)
      output << A.a[i] << endl;
    return output;
  }
   friend istream& operator>>(istream &input, complexCls &A){
    do{
      cout << "Enter n: ";
      input >> A.n;
      if(A.n < 0 || A.n > A.MAX)
        cout << "n must be 0 < n < " << A.MAX << endl;
      while(A.n < 0 || A.n > A.MAX);
    // if(A.n < 0 || A.n > A.MAX)    throw "index out of range";
    for(int i=0; i<A.n; i++){
      cout << "Enter element: " << i << ": ";
      input >> A[i];
    }
    return input;
  }
};
void f1(void);
int main(){
  f1();
  return 0;
}
myArray operator*(const myArray a[],const myArray b[]){
  myArray result;
  result.z=a[]*b[];
  return result;
}
myArray operator>(const myArray a[],const myArray b[]){
  for(int i=0 ; i<arr.n ; i++)
  if(*a[i]>*b[i])
  cout << "a is greater than b" << endl;
  else
  if(a[]>b[])
  cout << "a is greater than b" << endl;
  else
  cout << "b is greater than a" << endl;
}
void f1(void){
  double x[]{10, 12, 34, 54};
  myArray d(x, sizeof(x)/sizeof(x[0]));
  myArray p(d);
  myArray q=p;
  myArray a[]={1,2,3,4,};
  myArray b[]={1,1,5,2};
  myArray z[]= a[] * b[];
  myArray A[];
  cin >> A[];
  cout << A[];
  p.print();
}
/*
copy construcotr
copy construcotr
 n = 0
Destructor
Destructor
Destructor
*/
