#include "iostream"
#include "string"
#include "box.h"

using namespace std ;

class box {
// public attributes
public:
    int heigth ;
    int width ;
    int length ;

// private attributes
private:
	void set_up(int h, int w, int l){
	heigth = h ;
	width = w ;
	length = l ;

}

    int box_volume (){
    
    int volume = height * width * length ;
    return volume ;
    
    }


};

int main ()
{

    //instantiton of the objects.
   box *box_first = new box ;
   box *box_second = new box ;
   
   //setting value for the first box
   (*box_first).set_up(2, 3, 7) ;

    







}

