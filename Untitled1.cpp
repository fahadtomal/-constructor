#include<iostream>
using namespace std;
class constructor{

  private:
      int m,n;
  public:
      constructor(int a ,int b);  /*constructor defined in public
                                    section and no return type */
};

constructor::constructor(int a ,int b)
{
    m=a;                 /* as constructor is a member function
                            it can enter/call the private member
                            variables m and n   */
    n=b;

    cout<<m<<endl<<n;
}

int main()
{
    constructor A(2,3);   /*  values are being passed by object A
                             as argument to the constructor  */
    return 0;

}
