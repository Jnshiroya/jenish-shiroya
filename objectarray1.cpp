#include<iostream>
using namespace std;
class shop{
      int item_id;
      float prize;
      public:
      set_data(int i,float p){
          item_id=i;
          prize=p;
      }
      get_data(){
          cout<<"item id:"<<item_id<<endl;
          cout<<"prize:"<<prize<<endl;
      }
};
int main(){
    int size;
    int id;
    float prize;
    cout<<"enter no item:";
    cin>>size;
    shop *ptr=new shop[size];
    for(int i=0;i<size;i++){
        cin>>id>>prize;
        (ptr+i) -> set_data(id,prize);
    }
    for(int i=0;i<size;i++){
        
        (ptr+i) -> get_data();
    }

    return 0;
}