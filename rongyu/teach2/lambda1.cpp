#include <iostream>
#include <algorithm>
using namespace std;
/*编写程序，当用户从键盘键入一个10-20之间的数据时，输出数据的2倍，否则输出数据本身。*/

int main()
{
   int min = 10, max = 20;
   int num;

   while(cin>>num)
   {
       [min,max](int &x){
            if(x>=min&&x<=max)
                x= 2*x;
        }(num);
        cout<<num<<endl;
   }
    return 0;


}
