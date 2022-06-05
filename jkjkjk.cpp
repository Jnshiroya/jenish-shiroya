#include<iostream>
using namespace std;

 void xhandler()
   {
     try
{
  throw “hello”;
}
  catch(char *)
  {
   cout<<“chaught  inside function\n”;
   throw;
}
 catch(char *)
  {
   cout<<“lodav thay gyu”;
//    throw;
}
}
   int  main()
    {
    cout<<“start\n”;
    try
   {
    xhandler();
}
  catch(char *)
  {
    cout<<“ caught inside main\n”;
}
cout<<“end”;
return 0;
}

