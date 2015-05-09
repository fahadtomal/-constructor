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
}

int main()
{
    constructor A(2,3);   /*  values are being passed by object A
                             as argument to the constructor  */
    return 0;

}
