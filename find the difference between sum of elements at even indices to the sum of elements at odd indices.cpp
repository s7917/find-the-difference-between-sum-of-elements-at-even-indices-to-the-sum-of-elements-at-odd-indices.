// find the difference between sum of elements at even indices to the sum of elements at odd indices.
  #include<iostream>
using namespace std;

int main(){
    int array[] = {1 ,2 ,3 ,4 ,5 ,6};

    int anssum =0;
    for(int i=0 ; i<6 ;i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }
    }
    cout<<anssum;
    return 0;
}
