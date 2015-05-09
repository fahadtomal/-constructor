#include<iostream>
using namespace std;
class constructor{

  private:
      int m,n,k,l;
  public:
      constructor(int a ,int b);  /*constructor defined in public
                                    section and no return type */
};

constructor::constructor(int a ,int b)
{
    m=a;                 /* as constructor is a member function
                            it can enter/call the private member
                            variables m , n ,K   */
    n=b;

    k=a+b;             /*thus any value can be initialized by
                         a and b */
    l=a-b;
    cout<<m<<endl<<n<<endl<<k<<endl<<l;
    cout<<endl<<endl;
}

int main()
{
    constructor A(2,3),B(20,10);
                           /*  values are being passed by object A
                               and B as argument to the constructor  */
    return 0;             /*   A and B are two objects of same class
                               and they have different parameters to
                               initialize,so constructor initialize
                               values separately for them            */

}
